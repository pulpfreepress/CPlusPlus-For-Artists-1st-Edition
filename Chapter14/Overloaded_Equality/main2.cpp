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
#include "person.h"

int main(){	
	
	Person Rick("Rick", "Warren", "Miller", 'M', 41);
	Person Bob("Bob", "J", "Jones", 'M', 25);
	
	if(Rick == Rick)
		cout<<"Same person!"<<endl;
		else cout<<"Different person!"<<endl;
		
	if(Rick != Bob)
	    cout<<"Different person!"<<endl;
		else cout<<"Same person!"<<endl;
	return 0;
}
