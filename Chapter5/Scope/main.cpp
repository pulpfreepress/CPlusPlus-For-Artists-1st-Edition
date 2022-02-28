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

using namespace std;  //introduces namespace std

void someFunction();

 int a = 1, b = 2;
 
 void someFunction(){
 
   cout<<"In someFunction(): outer scope a == "<<a<<endl;
   int a = 3;
   cout<<"In someFunction(): inner scope a == "<<a<<endl;
 
 }


int main()
{	
	someFunction();
	 { 
	  cout<<a<<endl;
	  int a = 3;
	  cout<<a<<endl;
     }
	cout<<a<<" "<<b<<endl;
	
	
	return 0;
}

