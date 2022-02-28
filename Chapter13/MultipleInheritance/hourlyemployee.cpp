/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "employee.h"
#include "hourlyemployee.h"


int HourlyEmployee::hourly_employee_count = 0;

HourlyEmployee::HourlyEmployee(char* f_name, char* m_name, char* l_name,
				char sex, int age, float _hourly_rate):
				Employee(f_name, m_name, l_name, sex, age), hourly_rate(_hourly_rate),
				hours_worked(0){
				hourly_employee_count++;
}

HourlyEmployee::~HourlyEmployee(){hourly_employee_count--;}

float HourlyEmployee::pay(){return (hourly_rate * hours_worked);}

void HourlyEmployee::setHoursWorked(float hours){
	hours_worked = hours;
}

float HourlyEmployee::getHoursWorked(){return hours_worked;}
		
void HourlyEmployee::setHourlyRate(float rate){
	hourly_rate = rate;}
		
float HourlyEmployee::getHourlyRate(){return hourly_rate;}
		
int HourlyEmployee::getHourlyEmployeeCount(){return hourly_employee_count;}
