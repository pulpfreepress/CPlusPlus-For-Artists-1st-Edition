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
#include "getnewintaddress.h"
using namespace std;  

int main(){	
	int* ip_array[10];
	
	for(int i = 0; i < 10; i++)
		*(ip_array[i] = getNewIntAddress()) = (i+1);
		
	for(int i = 0; i < 10; i++)
		cout<<*ip_array[i]<<" ";
		
	cout<<endl;
	
	for(int i = 0; i < 10; i++)
		*ip_array[i] += 2;
		
	for(int i = 0; i < 10; i++)
		cout<<*ip_array[i]<<" ";
	
	
	for(int i = 0; i < 10; i++)
		delete ip_array[i];
	
	return 0;
}

