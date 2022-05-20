#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char stName[20]) {
  studentID = id;
  strcpy(name, stName);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID : " << studentID << endl;
  cout << "Student Name : " << name;  
}
