/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "foo.h"
#include <iostream>
using namespace std;

int Foo::foo_count = 0;

	Foo::Foo(int ival, float fval): i(ival), f(fval){
	
		if((++foo_count) == 1)
		  cout<<"There is "<<foo_count<<" foo object."<<endl;
		 else
		 	cout<<"There are "<<foo_count<<" foo objects."<<endl;
	}
	
   Foo::Foo(Foo& f_object){
    	i = f_object.i;
    	f = f_object.f;
    	
    	if((++foo_count) == 1)
		  cout<<"There is "<<foo_count<<" foo object."<<endl;
		 else
		 	cout<<"There are "<<foo_count<<" foo objects."<<endl;
    }
    
    Foo& Foo::operator=(Foo& rhs){
        i = rhs.i;
        f = rhs.f;
        return *this;
    }
    
    Foo::~Foo(){
      if((--foo_count) == 1)
		  cout<<"There is "<<foo_count<<" foo object."<<endl;
		 else
		 	cout<<"There are "<<foo_count<<" foo objects."<<endl;
    }
    
    void Foo::printAttributes(){
       printI();
       printF();
    }
    
    void Foo::setI(int ival){
       i = ival;
    }
    
    void Foo::setF(float fval){
       f = fval;
    }
    
    void Foo::incrementF(){
       f += 1.0;
    }
    void Foo::incrementF(float increment_value){
       f += increment_value;
    }
    void Foo::incrementI(){
       ++i;
    }
    
    void Foo::incrementI(int increment_value){
       i += increment_value;
    }
    
    void Foo::printI(){
    	cout<<"The value of i = "<<i<<endl;
    }
    
    void Foo::printF(){
        cout<<"The value of f = "<<f<<endl;
    }
