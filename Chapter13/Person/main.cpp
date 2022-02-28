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
#include "person.h"

using namespace std; 

int main(){	
	
	Person p1;
	
	cout<<p1.getFirstName()<<endl;
	cout<<p1.getFullName()<<endl;
	p1.setFirstName("Bob");
	p1.setMiddleName("Raymond");
	p1.setLastName("Basmahranian");
	
	cout<<p1.getFullName()<<" "<<p1.getAge()<<" "<<p1.getSex()<<endl;
	cout<<p1.getFullName()<<" "<<p1.getAge()<<" "<<p1.getSex()<<endl;
	cout<<p1.getFullName()<<" "<<p1.getAge()<<" "<<p1.getSex()<<endl;
	cout<<p1.getFullName()<<" "<<p1.getAge()<<" "<<p1.getSex()<<endl;
	
	Person p2(p1);
	
	cout<<p1.getFullName()<<" "<<p1.getAge()<<" "<<p1.getSex()<<endl;
	cout<<p2.getFullName()<<" "<<p2.getAge()<<" "<<p2.getSex()<<endl;
	cout<<p2.getFullName()<<" "<<p2.getAge()<<" "<<p2.getSex()<<endl;
	
	p2.setFirstName("Richard");
	p2.setMiddleName("Warren");
	p2.setLastName("Miller");
	
	
	cout<<p2.getFullName()<<" "<<p2.getAge()<<" "<<p2.getSex()<<endl;
	cout<<p1.getFullName()<<" "<<p1.getAge()<<" "<<p1.getSex()<<endl;
	
	Person p3;
	
	p1=p3;
	
	cout<<p1.getFullName()<<" "<<p1.getAge()<<" "<<p1.getSex()<<endl;
	cout<<p2.getFullName()<<" "<<p2.getAge()<<" "<<p2.getSex()<<endl;
	cout<<p3.getFullName()<<" "<<p3.getAge()<<" "<<p3.getSex()<<endl;
	
	
	
	
	return 0;
}

