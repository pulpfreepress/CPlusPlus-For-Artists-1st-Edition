/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "printintarray.h"
 
int main(){	
	int my_array[] = {1,2,3,4,5,6,7,8,9,10};
	printIntArray(my_array, (sizeof my_array / sizeof(int)));
	return 0;
}

