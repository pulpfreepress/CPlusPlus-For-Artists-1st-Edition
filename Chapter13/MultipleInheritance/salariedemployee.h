/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef SALARIED_EMPLOYEE_H
#define SALARIED_EMPLOYEE_H
#include "employee.h"

class SalariedEmployee : public Employee{
	public:
		SalariedEmployee(char* f_name = "New", char* m_name = "Salaried",
						 char* l_name = "Employee", char sex = 'M', int age = 18,
						 float _salary = 0);
		virtual ~SalariedEmployee();
		float pay();
		float getSalary();
		void setSalary(float _salary);
		int getSalariedEmployeeCount();
	private:
		static int salaried_employee_count;
		float salary;
};
#endif
