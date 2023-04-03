#include "OfficeHour.h"

#include <algorithm>
#include <iostream>
/*
Given the current Office Hour queue and the currently on-duty staffers, return
how long the nth student will need to wait before a Staffer can reach them
Return -1 if there are no staff available to help the nth student

@param queue A queue containing the students currently waiting for help
@param onDutyStaff  A vector of Staffers currently on duty
@param nthStudent   The student for whom we are calculating a wait time
@return             How many minutes the nth student will have to wait before
getting help
*/
// void setAvailability(vector<bool>& availability, int nthStaff) {
//   availability[nthStaff] = availability[nthStaff] == true ? false : true;
// }
int waitTime(std::queue<Student> queue, std::vector<Staffer> onDutyStaff,
             int nthStudent) {
  int currentTime = 0;
  std::vector<int> availability(onDutyStaff.size(), 0);
  std::vector<bool> asleep(onDutyStaff.size(), false);
  if (onDutyStaff.size() == 0) return -1;
  int i = 1;
  while (i < nthStudent && !queue.empty()) {
    Student currentStudent = queue.front();
    int timeNeeded = 0;

    bool done = false;
    for (size_t j = 0; j < onDutyStaff.size(); j++) {
      if (onDutyStaff[j].getEnergyLevel() - 5 < 0) asleep[j] = true;
      if (std::find(asleep.begin(), asleep.end(), false) == asleep.end())
        return -1;
      if (availability[j] <= currentTime && !asleep[j]) {
        timeNeeded = onDutyStaff[j].answerQuestion(
            currentStudent.getQuestionType(), currentStudent.getTimeNeeded());
        if (timeNeeded == 112358) {
          asleep[j] = true;
        } else {
          availability[j] += timeNeeded;
          currentTime += timeNeeded;
          done = true;
          break;
        }
      }
    }
    if (done) {
      currentTime =
          *(std::min_element(availability.begin(), availability.end()));
      queue.pop();
      i++;
    } else {
      return -1;
    }
  }

  return currentTime;
}
