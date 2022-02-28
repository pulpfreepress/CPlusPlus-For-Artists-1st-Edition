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
#include "foo.h"
#include "derivedfoo.h"
#include "ddfoo.h"

int main()
{	

	Foo f1(1);
	cout<<"getI() called on base class object: "<<endl;
	cout<<f1.getI()<<endl;
	cout<<"-----------------------------------"<<endl;
	
	DerivedFoo d1(2);
	cout<<"getI() called on derived class object: "<<endl;
	cout<<d1.getI()<<endl;
	cout<<"-----------------------------------"<<endl;
	
	Foo* foo_ptr = new DerivedFoo(3);
	cout<<"getI() called via base class pointer: "<<endl;
	cout<<foo_ptr->getI()<<endl;
	cout<<"-----------------------------------"<<endl;
	
	DerivedFoo* derived_foo_ptr = new DerivedFoo(4);
	cout<<"Derived getI() called via derived class pointer: "<<endl;
	cout<<derived_foo_ptr->getI()<<endl;
	cout<<"-----------------------------------"<<endl;
	
	
	delete foo_ptr;
	delete derived_foo_ptr;

	return 0;
}

