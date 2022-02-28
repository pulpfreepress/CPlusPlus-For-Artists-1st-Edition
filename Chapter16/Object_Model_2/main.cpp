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
using namespace std; 
#include "baseclass.h"
#include "derivedclasses.h"

int main()
{	
   BaseClass* bcptr;
   DClassOne dc1;
   DClassTwo dc2;
   
   bcptr = &dc1;
   
   bcptr->f();
	
	return 0;
}

