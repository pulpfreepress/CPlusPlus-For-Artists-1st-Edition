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
#include "personstruct.h"
#include "personfunctions.h"
using namespace std; 


int main(){	
	
	Person Bob;
	
	setFirstName(Bob, "Bob");
	setLastName(Bob, "Smith");
	setHairColor(Bob, HairColor::Red);
	setEyeColor(Bob, EyeColor::Blue);
	
	cout<<"First Name: "<<getFirstName(Bob)<<endl;
	cout<<" Last Name: "<<getLastName(Bob)<<endl;
	cout<<"Hair Color: "<<getHairColor(Bob)<<endl;
	cout<<" Eye Color: "<<getEyeColor(Bob)<<endl;
	
	cout<<endl<<endl;
	
	Person* Bill = new Person;
	
	setFirstName(*Bill, "Bill");
	setLastName(*Bill, "Jones");
	setHairColor(*Bill, HairColor::Blond);
	setEyeColor(*Bill, EyeColor::Brown);
	
	cout<<"First Name: "<<getFirstName(*Bill)<<endl;
	cout<<" Last Name: "<<getLastName(*Bill)<<endl;
	cout<<"Hair Color: "<<getHairColor(*Bill)<<endl;
	cout<<" Eye Color: "<<getEyeColor(*Bill)<<endl;
	
	delete Bill;
	
	return 0;
}

