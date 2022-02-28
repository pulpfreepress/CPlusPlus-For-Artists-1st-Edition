/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include <iostream>
using namespace std;
#include <iomanip.h>  
#include "employee.h"
#include "hourlyemployee.h"
#include "salariedemployee.h"

int main(){
	Employee* employees[2];
	
	HourlyEmployee Bob("Bob", "J", "Jones");
	Bob.setHoursWorked(80);
	Bob.setHourlyRate(8.00);
	cout<<Bob.getHoursWorked()<<" "<<Bob.getHourlyRate()<<" "<<Bob.pay()<<endl;
	
	SalariedEmployee Sue("Sue", "Mae", "Lind", 'F', 23, 67000.00);
	cout<<Sue.getSalary()<<" "<<Sue.pay()<<endl;
	
	employees[0] = &Bob;
	employees[1] = &Sue;
	
	cout<<endl<<endl<<endl;
	
	cout<<"#"<<setw(15)<<"First"<<setw(15)<<"Middle"<<setw(15)<<"Last"<<setw(10)<<"Pay"<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	
	
	for(int i=0; i<2; i++){
	  cout<<employees[i]->getEmployeeNumber()<<setw(15)<<employees[i]->getFirstName()
	      <<setw(15)<<employees[i]->getMiddleName()<<setw(15)<<employees[i]->getLastName()
	      <<"     $"<<setw(8)<<employees[i]->pay()<<endl;
	
	}
	
	return 0;
}

