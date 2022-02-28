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
#include "dynamicarray.h" 

int main(){	
	DynamicArray d1;
	
	for(int i=0; i<6; i++){
		d1[i] = i;
	}
	
	int j = d1[3];
	cout<<"j: "<<j<<endl;
	
	for(int i=0; i<d1.getSize(); i++){
		cout<<d1[i]<<endl;
	}
	
	return 0;
}

