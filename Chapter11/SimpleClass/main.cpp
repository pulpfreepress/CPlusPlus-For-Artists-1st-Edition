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
#include "simpleclass.h"
using namespace std;  

int main(){	

	SimpleClass s1;
	cout<<"s1 = "<<s1.getI()<<endl;
	s1.setI(5);
	cout<<"s1 = "<<s1.getI()<<endl<<endl;
	
	
	SimpleClass s2(s1);
	cout<<"s2 = "<<s2.getI()<<endl<<endl;
	
	SimpleClass s3;
	cout<<"s3 = "<<s3.getI()<<endl;
	s3 = s1;
	cout<<"s3 = "<<s3.getI()<<endl;

	return 0;
}

