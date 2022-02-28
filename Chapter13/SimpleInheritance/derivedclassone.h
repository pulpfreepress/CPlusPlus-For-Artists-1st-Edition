/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef DERIVED_CLASS_H
#define DERIVED_CLASS_H
#include "baseclass.h"

class DerivedClassOne : public BaseClass{
  public:
  	DerivedClassOne();
  	virtual ~DerivedClassOne();
  	int getDerivedOneCount();
  	int getDerivedOneNumber();
  
  private:
    static int count;
    int its_number;
};
#endif
