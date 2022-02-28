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
#include "testfunctions.h"
#include "dumbsort.h"
using namespace std; 

int main(){	

	 typedef float (*fun_ptr)(float, float);
	 
	 fun_ptr fun_ptr_array[4];
	
	fun_ptr_array[0] = add;
	fun_ptr_array[1] = sub;
	fun_ptr_array[2] = mul;
	fun_ptr_array[3] = div;
	
	for(int i = 0; i < 4; i++)
		cout<<fun_ptr_array[i](5,5)<<endl;


	int int_array[10] = {34,3,16,2,8,10,1,0,5,11};
	
	for(int i = 0; i<10; i++)
		cout<<int_array[i]<<" ";
	cout<<endl;
	
	dumbSort(int_array, 0, 10, compareAccending);
	
	for(int i = 0; i<10; i++)
		cout<<int_array[i]<<" ";
	cout<<endl;
	
	dumbSort(int_array, 0, 10, compareDecending);
	
	for(int i = 0; i<10; i++)
		cout<<int_array[i]<<" ";
	cout<<endl;
	

	
	return 0;
}

