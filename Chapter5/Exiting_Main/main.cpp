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

void goodBye();

void goodBye(){
	cout<<"Goodbye cruel world!"<<endl;
}


int main(){
	atexit(&goodBye);
	exit(EXIT_SUCCESS);
}


