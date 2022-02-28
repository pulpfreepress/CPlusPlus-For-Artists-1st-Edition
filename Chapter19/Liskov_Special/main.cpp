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
#include "a.h"
#include "b.h"
#include "c.h"

int main(){	

   A a1;
   B b1;
   C c1;
   
   A* a_ptr = new C();
   
   a_ptr->f(a1);
   a_ptr->f(b1);
   a_ptr->f(c1);
   
   delete a_ptr;
   return 0;
}

