/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef _FOO_H
#define _FOO_H

class Foo{
  public:
   	Foo(int ival = 0, float fval = 0.0);
    Foo(Foo& f_object);
    Foo& operator=(Foo& rhs);
    ~Foo();
    void printAttributes();
    void setI(int ival);
    void setF(float fval);
    void incrementF();
    void incrementF(float increment_value);
    void incrementI();
    void incrementI(int increment_value);
    
    private:
        static int foo_count;
    	int i;
    	float f;
    	void printI();
    	void printF();
    	
};
#endif
