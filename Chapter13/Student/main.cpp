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
#include "student.h"

int main()
{	
	
	Student s1, s2("Coralie", "Sarah", "Miller");
	
	cout<<s1.getFirstName()<<" "<<s1.getLastName()<<endl;
	cout<<s2.getFirstName()<<" "<<s2.getLastName()<<endl;
	
	return 0;
}

