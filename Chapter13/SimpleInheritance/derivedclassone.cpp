/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "derivedclassone.h"
#include "baseclass.h"
#include <iostream>
using namespace std;


int DerivedClassOne::count = 0;

DerivedClassOne::DerivedClassOne():its_number(++count){
	cout<<"DerivedClassOne object number "<<its_number<<" created."<<endl;
	cout<<"There are "<<count<<" DerivedClassOne objects."<<endl;
}

DerivedClassOne::~DerivedClassOne(){
	cout<<"DerivedClassOne object number "<<its_number<<" destroyed."<<endl;
	cout<<"There are "<<--count<<" DerivedClassOne objects remaining."<<endl;
}

int DerivedClassOne::getDerivedOneCount(){return count;}

int DerivedClassOne::getDerivedOneNumber(){return its_number;}
