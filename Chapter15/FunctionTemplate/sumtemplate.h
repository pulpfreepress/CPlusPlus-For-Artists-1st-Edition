/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef SUM_TEMPLATE_H
#define SUM_TEMPLATE_H

template<class T = int, class U = int, class V = int>
V Sum(T val1, U val2){
	return val1 + val2;
}
#endif
