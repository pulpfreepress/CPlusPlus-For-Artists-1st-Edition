/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "person.h"
#include "payable.h"

class Employee : public Person, public Payable{
	public:
		Employee(char* f_name = "Brand", char* m_name = "New", char* l_name = "Employee",
				 char sex = 'M', int age = 18);
		virtual ~Employee();
		int getEmployeeNumber();
		void setEmployeeNumber(int number);
		int getEmployeeCount();
		
	private:
		int employee_number;
		static int employee_count;
};

#endif
