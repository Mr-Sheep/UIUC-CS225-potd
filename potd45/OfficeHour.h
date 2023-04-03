#pragma once

#include <queue>
#include <vector>

#include "Staffer.h"
#include "Student.h"

using namespace std;

int waitTime(queue<Student> currentQueue, vector<Staffer> onDutyStaff,
             int nthStudent);
