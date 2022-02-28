/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef SUB_H
#define SUB_H

#include "super.h"
#include <iostream>

using namespace std;

class Sub : public Super{

  public:
  	  Sub(){ m(); }
  	  virtual ~Sub(){}
  	  virtual void m(){ cout<<"Sub m()!"<<endl;}
  	  
};

#endif
