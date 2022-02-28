/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef DUMBSORT_H
#define DUMBSORT_H

template<class T>
bool compareAscending(T a, T b){return a>b;}

template<class T>
bool compareDescending(T a, T b){return a<b;}


template<class T, class U>
void dumbSort(T a[], int l, int r, bool (*sortDirection)(U, U)){
	for(int i = l; i< r; i++){
	  for(int j = (l+1); j < r; j++){
		if(sortDirection(a[j-1], a[j])) {
		  U temp = a[j-1];
		  a[j-1] = a[j];
		  a[j] = temp;
		 }  
	  }   
    }
}		



#endif
