/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "incrementer.h"
#include "derived.h"
#include <iostream>
using namespace std;
#include <assert.h>

 Derived::Derived(int i):Incrementer(i),derived_val(i){
     cout<<"Derived object created!"<<endl;
     checkInvariant();
 }
 
 Derived::~Derived(){
    cout<<"Derived object destroyed!"<<endl;
 }
 
void Derived::increment(int i){
	// enforce precondition 0 < i <= 10
	assert((i >= 0) && (i <= 10));
	Incrementer::increment(i);
	
	// change incrementer object state
	if((derived_val+i) <= 50){
	    derived_val += i;
	 }else{
	    int temp = derived_val;
	    temp += i;
	    derived_val = (temp - 50);
	 	}
	 	
	 // enforce class invariant
	 checkInvariant();
	 
	 cout<<"Derived value is: "<<derived_val<<endl;
	 
} 
	

void Derived::checkInvariant(){
	 assert((derived_val >= 0) && (derived_val <= 50));
}
