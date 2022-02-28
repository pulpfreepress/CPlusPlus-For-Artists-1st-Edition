/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef HOURLY_EMPLOYEE_H
#define HOURLY_EMPLOYEE_H
#include "employee.h"

class HourlyEmployee : public Employee{
	public:
		HourlyEmployee(char* f_name = "Brand", char* m_name = "New", char* l_name = "Employee",
				 char sex = 'M', int age = 18, float _hourly_rate = 0);
		virtual ~HourlyEmployee();
		float pay();
		void setHoursWorked(float hours);
		float getHoursWorked();
		void setHourlyRate(float rate);
		float getHourlyRate();
		int getHourlyEmployeeCount();
		
	private:
	  static int hourly_employee_count;
	  float hourly_rate;
	  float hours_worked;
};

#endif
