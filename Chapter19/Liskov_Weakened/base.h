/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef BASE_CLASS
#define BASE_CLASS

class Base {
  public:
  	Base();
  	virtual ~Base();
  	virtual void f(int i);
  private:
    int int_val;
};

#endif
