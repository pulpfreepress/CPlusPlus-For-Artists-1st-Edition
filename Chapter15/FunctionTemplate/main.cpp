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
#include "sumtemplate.h"
using namespace std;  

int main(){	
	cout<<Sum<int, int, int>(3, 25)<<endl;
	cout<<Sum<double, double, double>(3.456, 5.786)<<endl;
	cout<<Sum<char, char, char>('a', 'b')<<endl;
	cout<<Sum<double, int, double>(3.5, 3)<<endl;
	return 0;
}

