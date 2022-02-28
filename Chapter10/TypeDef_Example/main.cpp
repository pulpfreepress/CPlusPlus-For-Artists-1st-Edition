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
#include "calculatepay.h"
#include "mydefs.h"

using namespace std;  

int main()
{	
	Hours employeeWorkHours = 0;
	Currency employeePayRate = 0.0;
	
	cout<<"Please enter hours worked: ";
	cin>>employeeWorkHours;
	cout<<endl<<"Please enter employee hourly pay rate: ";
	cin>>employeePayRate;
	
	cout<<endl<<"The employee's pay is: "<<calculatePay(employeeWorkHours, employeePayRate)<<endl;
	
	
	return 0;
}

