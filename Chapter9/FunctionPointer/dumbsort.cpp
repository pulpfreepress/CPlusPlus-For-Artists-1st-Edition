/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "dumbsort.h"


void dumbSort(int a[], int l, int r, bool (*sortDirection) (int, int)){
	for(int i = l; i< r; i++){
	  for(int j = (l+1); j < r; j++){
		if(sortDirection(a[j-1], a[j])) {
		  int temp = a[j-1];
		  a[j-1] = a[j];
		  a[j] = temp;
		 }  
	  }   
    }
}		
		
