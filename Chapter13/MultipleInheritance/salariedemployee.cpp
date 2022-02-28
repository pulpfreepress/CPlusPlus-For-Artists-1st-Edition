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
#include "salariedemployee.h"

int SalariedEmployee::salaried_employee_count = 0;

SalariedEmployee::SalariedEmployee(char* f_name, char* m_name, char* l_name,
				  char sex, int age, float _salary):
				  Employee(f_name, m_name, l_name, sex, age), salary(_salary){
				  salaried_employee_count++;
}

SalariedEmployee::~SalariedEmployee(){salaried_employee_count--;}

float SalariedEmployee::pay(){ return (salary/26);}

float SalariedEmployee::getSalary(){return salary;}

void SalariedEmployee::setSalary(float _salary){
	  salary = _salary;
}


int SalariedEmployee::getSalariedEmployeeCount(){
	return salaried_employee_count;
}
