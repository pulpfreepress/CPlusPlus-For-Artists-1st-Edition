#include "firstclass.h"
/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include <iostream.h>


int FirstClass::object_count = 0;

FirstClass::FirstClass(){

   cout<<"There are "<<++object_count<<" FirstClass objects!"<<endl;
       

}

FirstClass::~FirstClass(){

  if((--object_count)==0)
  	cout<<"There are no FirstClass objects!"<<endl;
  	
  	else cout<<"There are "<<object_count<<" FirstClass objects!"<<endl;


}
