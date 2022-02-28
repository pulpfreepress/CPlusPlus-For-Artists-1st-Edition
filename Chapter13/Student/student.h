/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student : public Person{
	public:
	 Student(char* _f_name = "Joe", char* _m_name = "M", 
	 		 char* _l_name = "Student", char _sex = 'M', int _age = 18);
	 ~Student();
	 void setStudentNumber(int _student_number);
	 int getStudentNumber();
	 int getStudentCount();
	
	private:
	  static int student_count;
	  int student_number;
};
#endif
