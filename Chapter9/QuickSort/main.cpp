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
#include "quicksort.h"
using namespace std; 

int main()
{	
	int a[] = {15,200,83,1,22,5,44,77,12,23,99,100,32,64,25,0,40};
	
	for(int i = 0; i<((sizeof a)/sizeof(int)); i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	quickSort(a, 0, ((sizeof a)/sizeof(int)));
	
	for(int i = 0; i<((sizeof a)/sizeof(int)); i++)
		cout<<a[i]<<" ";
	
	return 0;
}

