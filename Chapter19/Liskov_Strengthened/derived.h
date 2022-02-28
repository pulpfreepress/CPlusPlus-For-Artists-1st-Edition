/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef DERIVED_CLASS
#define DERIVED_CLASS
#include "incrementer.h"


class Derived : public Incrementer {
  /****************************************
   Class Invariant: 0 <= derived_val <= 50
  ****************************************/
  public:
  	Derived(int i = 0);
  	virtual ~Derived();
  	/***************************************
  	       function: void increment(int i)
  	   precondition: 0 <= i <=3
  	  postcondition: 0 <= derived_val <= 50
  	***************************************/
  	virtual void increment(int i);
  private:
    int derived_val;
    void checkInvariant();
};

#endif
