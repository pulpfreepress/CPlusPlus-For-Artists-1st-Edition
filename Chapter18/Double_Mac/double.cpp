/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "double.h"

asm int doubleVal(int int_val){
   lwz r0, int_val     //load int_val into register 0
   mulli r3, r0, 2     // multiply immediate r0 by 2, store in r3 for return

}
