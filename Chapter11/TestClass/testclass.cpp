/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "testclass.h"
#include <iostream>
using namespace std;


TestClass::TestClass(int const_val, int i_val):CONST_VAL(const_val), i(i_val){
    cout<<"CONST_VAL = "<<CONST_VAL<<endl;
	cout<<"        i = "<<i<<endl;
}

TestClass::TestClass(TestClass& tc_obj):CONST_VAL(tc_obj.CONST_VAL), i(tc_obj.i){
	 cout<<"CONST_VAL = "<<CONST_VAL<<endl;
	 cout<<"        i = "<<i<<endl;
}

TestClass& TestClass::operator=(TestClass& rhs){
	 i = rhs.i;
	 return *this;		
}

TestClass::~TestClass(){
	cout<<"Goodbye cruel world! TestClass object destroyed."<<endl;
}

int TestClass::getConstVal(){
	return CONST_VAL;
}

void TestClass::setI(int i_val){
		i = i_val;
}

int TestClass::getI(){
	return i;
}
