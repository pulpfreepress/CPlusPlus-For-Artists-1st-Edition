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
#include "testfunctionfive.h"
using namespace std;  

/**********************************************
int i=1, j=2;

int main()
{	
	cout<<"Value of i: "<<i<<" j: "<<j<<endl;
	testFunctionFive(&i);
	testFunctionFive(&j);
	cout<<"Value of i: "<<i<<" j: "<<j<<endl;
	return 0;
}
*********************************************/

int main(){
	int * ip1 = new int(3);
	
	cout<<"Value of integer pointed to by ip1 = "<<*ip1<<endl;
	testFunctionFive(ip1);
	cout<<"Value of integer pointed to by ip1 = "<<*ip1<<endl;
	delete ip1;


 return 0;
}
