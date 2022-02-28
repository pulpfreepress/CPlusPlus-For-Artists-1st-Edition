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
#include "abstractclass.h"
#include "derivedclassone.h"

int main()
{	
	// AbstractClass abs_object;
	
	   AbstractClass* abs_ptr;
	   
	//   abs_ptr = new AbstractClass;
	
		abs_ptr = new DerivedClassOne;
	   
	   delete abs_ptr;
	return 0;
}

