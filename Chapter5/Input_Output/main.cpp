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

int main()
{	
	int a = 0, b = 0, c = 0;
	
	cout<<"Enter values for a, b, and c: ";
	
	cin>>a>>b>>c;
	
	cout<<a<<" "<<b<<" "<<c<<endl;
	
	int d;
	
	cout<<"Enter a char value or string: "<<flush;
	       cin>>d;
	
		while(!cin){
	  	cout<<"Input was bad! Try Again..."<<endl;
	  	cin.clear();
	  	cin.ignore(INT_MAX, '\n');
	  	cout<<"Enter a char value or string: "<<flush;
	    cin>>d;
	  }
	  	
	 cout<<"Input finally good!: "<<d<<endl;
	 cout<<"Program terminating..."<<endl;
	return 0;
}

