/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "print_2d_int_array.h"

int main(){	
	int my_2d_array[ROWS][COLS] = {{1,2,3,4,5},
						   {2,3,4,5,1},
						   {3,4,5,1,2},
						   {4,5,1,2,3},
						   {5,1,2,3,4}};
							 
	print2DIntArray(my_2d_array);
	
	return 0;
}

