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
#include "personclass.h"
using namespace std;  

int main(){	

  Person Bob;
	
	Bob.setFirstName("Bob");
	Bob.setLastName("Smith");
	Bob.setHairColor(HairColor::Black);
	Bob.setEyeColor(EyeColor::Blue);
	
	cout<<"First Name: "<<Bob.getFirstName()<<endl
		<<" Last Name: "<<Bob.getLastName()<<endl
		<<"Hair Color: "<<Bob.getHairColor()<<endl
		<<" Eye Color: "<<Bob.getEyeColor()<<endl;
		
    cout<<endl<<endl;
    
	
	return 0;
}

