/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "countinput.h"
#include <iostream>
using namespace std;

void countInput(int input){
	static int count = 0;
	if(count < (input + count)){
		cout<<"Still counting!"<<endl;
		count++;
		cout<<"The input was: "<<input<<endl;
		countInput(input - 1);
	}
}
