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

/******************************************************************
	Function Declaration
******************************************************************/

void addressCopyTest(int* ipA);

/****************************************************************
	Function Definition
*****************************************************************/

void addressCopyTest(int* ipA){
	cout<<"Address of ipA = "<<ipA<<"  Value at ipA = "<<*ipA<<endl;
	ipA++;
	cout<<"Address of ipA = "<<ipA<<"  Value at ipA = "<<*ipA<<endl;
}

/****************************************************************
    main() Function
****************************************************************/

int main(){	
	int i = 3;
	cout<<"Address of i = "<<&i<<"  value of i = "<<i<<endl;
	addressCopyTest(&i);
	cout<<"Address of i = "<<&i<<"  value of i = "<<i<<endl;
	
	return 0;
}

