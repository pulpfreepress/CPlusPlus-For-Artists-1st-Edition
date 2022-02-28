/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "person.h"
#include "employee.h"


int Employee::employee_count = 0;

Employee::Employee(char* f_name, char* m_name, char* l_name, char sex, 
				   int age):Person(f_name, m_name, l_name, sex, age){
	    employee_number = ++employee_count;
}

Employee::~Employee(){}

int Employee::getEmployeeNumber(){return employee_number;}

void Employee::setEmployeeNumber(int number){
	employee_number = number;
}

int Employee::getEmployeeCount(){ return employee_count;}
	    
