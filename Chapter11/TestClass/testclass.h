/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef TEST_CLASS_H
#define TEST_CLASS_H

class TestClass{
	public:
		TestClass(int const_val = 25, int i_val = 0);
		TestClass(TestClass& tc_obj);
		TestClass& operator=(TestClass& rhs);
		~TestClass();
		int getConstVal();
		void setI(int i_val);
		int getI();
		
	private:
		const int CONST_VAL;
		int i;

};
#endif
