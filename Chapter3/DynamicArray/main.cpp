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
#include "student.h"

using namespace std;  //introduces namespace std



int main()
{	

   Student **stu_ptr_array = new Student*[10];
   
   stu_ptr_array[0] = new Student;
   
   cout<<"Enter name: ";
   cin>>stu_ptr_array[0]->F_Name;
   cout<<endl;
   cout<<stu_ptr_array[0]->F_Name;
	
	return 0;
}

