#include "Node.h"
#include <iostream>

using namespace std;

void printList(Node *head) {
  if (head == NULL) {
    cout << "Empty list" << endl;
    return;
  }

  Node *temp = head;
  int count = 0;
  while (temp != NULL) {
    cout << "Node " << count << ": " << temp->data_ << endl;
    count++;
    temp = temp->next_;
  }
}

int main() {
  // Example #1
  Node n_0, n_1, n_2, n_22, n_3, n_4;
  n_0.data_ = 0;
  n_1.data_ = 1;
  n_2.data_ = 2;
  n_22.data_ = 1;
  n_3.data_ = 2;
  n_4.data_ = 3;

  n_0.next_ = &n_1;
  n_1.next_ = &n_2;
  n_2.next_ = NULL;

  n_22.next_ = &n_3;
  n_3.next_ = &n_4;
  n_4.next_ = NULL;

  cout << "First List:" << endl;
  printList(&n_0);
  cout << "Second List:" << endl;
  printList(&n_22);

  Node *r1 = listSymmetricDifference(&n_0, &n_22);
  cout << "Symmetric Difference" << endl;
  printList(r1);
  cout << endl;

  // Example #2
  Node p00, p01, p02, p03, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19;

  // List 1: 0 2 2 2
  p00.data_ = 0;
  p00.next_ = &p01;
  p01.data_ = 2;
  p01.next_ = &p02;
  p02.data_ = 2;
  p02.next_ = &p03;
  p03.data_ = 2;
  p03.next_ = NULL;

  // List 2: 0 0 0 4
  p10.data_ = 0;
  p10.next_ = &p11;
  p11.data_ = 0;
  p11.next_ = &p12;
  p12.data_ = 0;
  p12.next_ = &p13;
  p13.data_ = 2;
  p13.next_ = &p14;
  p14.data_ = 2;
  p14.next_ = &p15;
  p15.data_ = 2;
  p15.next_ = &p16;
  p16.data_ = 4;
  p16.next_ = &p17;
  p17.data_ = 4;
  p17.next_ = &p18;
  p18.data_ = 4;
  p18.next_ = &p19;
  p19.data_ = 4;
  p19.next_ = NULL;

  cout << "First List:" << endl;
  printList(&p00);
  cout << "Second List:" << endl;
  printList(&p10);

  Node *r2 = listSymmetricDifference(&p00, &p10);
  cout << "Symmetric Difference" << endl;
  printList(r2);
  cout << endl;
  // Example #2
  Node a00, a01, a02, a03, a04, a05, a06, a07, a08, a09, a10, a11, a12, a13,
      a14, a15, a16, a17, a18, a19;

  // List 1: 0 2 2 2
  a00.data_ = 0;
  a00.next_ = &a01;
  a01.data_ = 2;
  a01.next_ = &a02;
  a02.data_ = 2;
  a02.next_ = &a03;
  a03.data_ = 2;
  a03.next_ = &a04;
  a04.data_ = 8;
  a04.next_ = &a05;
  a05.data_ = 5;
  a05.next_ = &a06;
  a06.data_ = 6;
  a06.next_ = &a07;
  a07.data_ = 7;
  a07.next_ = &a08;
  a08.data_ = 8;
  a08.next_ = &a09;
  a09.data_ = 9;
  a09.next_ = NULL;
  // List 2: 0 0 0 4
  a10.data_ = 10;
  a10.next_ = &a11;
  a11.data_ = 4;
  a11.next_ = &a12;
  a12.data_ = 2;
  a12.next_ = &a13;
  a13.data_ = 5;
  a13.next_ = &a14;
  a14.data_ = 4;
  a14.next_ = &a15;
  a15.data_ = 5;
  a15.next_ = &a16;
  a16.data_ = 7;
  a16.next_ = &a17;
  a17.data_ = 5;
  a17.next_ = &a18;
  a18.data_ = 9;
  a18.next_ = &a19;
  a19.data_ = 0;
  a19.next_ = NULL;

  cout << "First List:" << endl;
  printList(&a00);
  cout << "Second List:" << endl;
  printList(&a10);

  Node *r3 = listSymmetricDifference(&a00, &a10);
  cout << "Symmetric Difference" << endl;
  printList(r3);
  cout << endl;
  return 0;
}
