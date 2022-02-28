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
#include "interface.h"
#include "derived_class_one.h"
#include "derived_class_two.h"

int main(){	

  Interface* i_ptr = new DerivedClassOne();
  i_ptr->function_a();
  i_ptr->function_b();
  i_ptr->function_c();
  delete i_ptr;
  
  i_ptr = new DerivedClassTwo();
  i_ptr->function_a();
  i_ptr->function_b();
  i_ptr->function_c();
  delete i_ptr;
  
  while(true){
  cout<<"Enter 1 for DerivedClassOne object; 2 for DerivedClassTwo object; anything else to exit: ";
  char c;
  cin>>c;
  switch(c){
   case '1': i_ptr = new DerivedClassOne();
             i_ptr->function_a();
             i_ptr->function_b();
             i_ptr->function_c();
             delete i_ptr;
             break;
   case '2': i_ptr = new DerivedClassTwo();
             i_ptr->function_a();
             i_ptr->function_b();
             i_ptr->function_c();
             delete i_ptr;
             break;
   default: exit(0);
   }//end switch
  }//end while
  
 }//end main()
