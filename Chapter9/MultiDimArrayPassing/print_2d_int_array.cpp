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
#include <iostream>
using namespace std;

void print2DIntArray(int intArray[ROWS][COLS]){
	for(int i = 0; i < ROWS; i++){
	  for(int j = 0; j < COLS; j++){
	  	cout<<intArray[i][j]<<" ";
	  	}
	 cout<<endl;
	}
}
