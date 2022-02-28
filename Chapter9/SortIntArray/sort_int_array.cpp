/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "sort_int_array.h"

void sortIntArray(int intArray[], int elements){
	for(int i = 0; i<elements; i++){
	  for(int j = 1; j<elements; j++){
	    if(intArray[j-1] > intArray[j]) {
			int temp = intArray[j-1];
			intArray[j-1] = intArray[j];
			intArray[j] = temp;
		 }
	   }
	 }
}
