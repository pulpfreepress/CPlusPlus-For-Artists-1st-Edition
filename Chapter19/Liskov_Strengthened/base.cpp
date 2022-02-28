/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "base.h"
#include <assert.h>
#include <iostream>
using namespace std;

Base::Base(){
    cout<<"Base object created!"<<endl;
}

Base::~Base(){
     cout<<"Base object destroyed!"<<endl;
}
void Base::f(int i){
     cout<<"Base f() precondition i<= 10: i = "<<i<<endl;
  	 assert(i<= 10);
}
