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
#include "derivedclassone.h"
#include <iostream>
using namespace std;

int main()
{	/* create a base class object and call some functions */
	BaseClass b1;
	cout<<"-----------------------------"<<endl;
	cout<<"Base count is "<<b1.getBaseCount()<<endl;
	cout<<"This object's number is "<<b1.getBaseNumber()<<endl;
	cout<<"-----------------------------"<<endl;
	
	/* create a derived class object and call some base class functions */
	DerivedClassOne d1;
	cout<<"Calling base class function getBaseCount() "
	    <<"from derived class object. "<< d1.getBaseCount()<<endl;
	cout<<"Calling base class function getBaseNumber() "
		<<"from derived class object. "<<d1.getBaseNumber()<<endl;
	cout<<"-----------------------------"<<endl;
	
	/* create a base class pointer and assign 
	   derived class object address */
	BaseClass *base_ptr = new DerivedClassOne;
	
	/* call some base class functions */
	cout<<base_ptr->getBaseCount()<<endl;
	cout<<base_ptr->getBaseNumber()<<endl;
	cout<<"-----------------------------"<<endl;
	
	/* now create derived class pointer and call some 
	   derived class functions and some base class functions  */
	DerivedClassOne *derived_ptr = new DerivedClassOne;
	cout<<derived_ptr->getDerivedOneCount()<<endl;
	cout<<derived_ptr->getDerivedOneNumber()<<endl;
	cout<<derived_ptr->getBaseCount()<<endl;
	cout<<derived_ptr->getBaseNumber()<<endl;
	cout<<"-----------------------------"<<endl;
	
	/* destroy the pointers before exiting program */
	delete base_ptr;
	delete derived_ptr;
	return 0;
}

