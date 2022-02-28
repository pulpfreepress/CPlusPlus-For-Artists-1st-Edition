/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "student.h"
#include "person.h"
#include <iostream>
using namespace std;

int Student::student_count = 0;

Student::Student(char* _f_name, char* _m_name, char* _l_name, char _sex, int _age)
                 :Person(_f_name, _m_name, _l_name, _sex, _age){
                  student_number = ++student_count;
 }
 
 Student::~Student(){
 	student_count--;
 }
 
 void Student::setStudentNumber(int _student_number){
 	student_number = _student_number;
 }
 
 int Student::getStudentNumber(){ return student_number;}
 
 int Student::getStudentCount(){ return student_count;}
