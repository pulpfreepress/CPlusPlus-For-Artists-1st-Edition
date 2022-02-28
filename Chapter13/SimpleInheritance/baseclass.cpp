/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "baseclass.h"
#include <iostream>
using namespace std;


int BaseClass::count = 0;

BaseClass::BaseClass():its_number(++count){
   cout<<"BaseClass object number "<<its_number<<" created."<<endl;
   cout<<"There are "<<count<<" BaseClass objects."<<endl;
}

BaseClass::~BaseClass(){
	cout<<"BaseClass object number "<<its_number<<" destroyed."<<endl;
	cout<<"There are "<<--count<<" BaseClass objects remaining."<<endl;
}

int BaseClass::getBaseNumber(){ return its_number;}

int BaseClass::getBaseCount(){return count;}

void BaseClass::b(){
	cout<<"BaseClass protected function called!"<<endl;
}
