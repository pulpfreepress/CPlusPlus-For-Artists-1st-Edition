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
#include "sort_int_array.h"
#include "printintarray.h"
using namespace std;  

int main()
{	
    int myArray[] = {10,5,9,4,3,8,2,7,6,1,0};
    
    
    printIntArray(myArray, ((sizeof myArray)/sizeof(int))); 
    sortIntArray(myArray, ((sizeof myArray)/sizeof(int)));
    printIntArray(myArray, ((sizeof myArray)/sizeof(int))); 
    

	return 0;
}

