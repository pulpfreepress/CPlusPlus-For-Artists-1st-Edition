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
#include "assert.h"
#include <iostream>
using namespace std;

Incrementer::Incrementer(int i):val(i){
	cout<<"Incrementer object created!"<<endl;
	checkInvariant();
}

Incrementer::~Incrementer(){
	cout<<"Incrementer object destroyed!"<<endl;
}

void Incrementer::increment(int i){
	// enforce precondition 0 < i <= 5
	assert((i > 0) && (i <= 5));
	
	// change incrementer object state
	if((val+i) <= 100){
	    val += i;
	 }else{
	    int temp = val;
	    temp += i;
	    val = (temp - 100);
	 	}
	 	
	 // enforce class invariant
	 checkInvariant();
	 
	 cout<<"Incrementer value is: "<<val<<endl;
	 
} 
	

void Incrementer::checkInvariant(){
	 assert((val >= 0) && (val <= 100));
}
