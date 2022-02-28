/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef IFOO_H
#define IFOO_H

class IFoo{
 public:
   
    virtual ~IFoo(){}
 	virtual void f() = 0;
};
#endif
