/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/************************************
  Pointers
 ***********************************/

#include <iostream>

using namespace std;  //introduces namespace std

int main()
{	
	/**********************************
	{
	  int a = 1, b = 2;
	  
	  cout<<"a = "<<a<<endl;
	  cout<<"b = "<<b<<endl;
	  
	  a++, b++;
	  
	  cout<<a<<" "<<b<<endl;
	  
	  cout<<"Please enter a number for a: ";
	  cin>>a;
	  cout<<"Please enter a number for b: ";
	  cin>>b;
	  
	  cout<<"a = "<<a<<endl;
	  cout<<"b = "<<b<<endl;
	  
	
	}
	*************************************
	
	{
	int a = 3;
	
	cout<<"           a = "<<a<<endl;
	cout<<"Address of a = "<<&a<<endl;
	
	
	
	}
	************************************
	
	{
	
	 int a = 3;
	 
	 int* int_ptr = &a;
	 
	 cout<<"           a = "<<a<<endl;
	 cout<<"Address of a = "<<&a<<endl;
	 cout<<"     int_ptr = "<<int_ptr<<endl;
	
	
	
	}
	**************************************
	{
	
	 int a = 3;
	 
	 int* int_ptr = &a;
	 
	 cout<<"           a = "<<a<<endl;
	 cout<<"Address of a = "<<&a<<endl;
	 cout<<"     int_ptr = "<<int_ptr<<endl;
	 cout<<"           a = "<<*int_ptr<<endl;
	
	
	
	}
	
	*************************************
	
	
	{
	  int a = 3;
	  int* int_ptr = &a;
	  
	  cout<<"           a = "<<a<<endl;
	  
	  *int_ptr = 4;
	  
	   cout<<"           a = "<<a<<endl;
	   
	   (*int_ptr)++;
	   
	    cout<<"           a = "<<a<<endl;
	   
	  
	  
	
	
	}
	
	
	****************************************
	
	{
	int* int_ptr;
	
	int_ptr = new int;
	*int_ptr = 0;
	
	cout<<"The reserved address is:        "<<int_ptr<<endl;
	cout<<"The value of the int object is: "<<*int_ptr<<endl;
	
	delete int_ptr;
	
	}
	
	
	****************************************
	
	{
	int* int_ptr;
	
	int_ptr = new int(0);
	
	cout<<"The reserved address is:        "<<int_ptr<<endl;
	cout<<"The value of the int object is: "<<*int_ptr<<endl;
	
	delete int_ptr;
	
	}
	
	
	************************************
	
	
	{
	 int a = 3;
	 int& ref_a = a;
	 
	 
	 cout<<"    a = "<<a<<endl;
	 cout<<"ref_a = "<<ref_a<<endl;
	 
	
	
	
	}
	************************************/
	
	
	{
	
	int* int_ptr = new int(7);
	char* char_ptr = new char('e');
	
	cout<<" The int value is: "<<*int_ptr<<endl;
	cout<<"The char value is: "<<*char_ptr<<endl;
	
	delete int_ptr;
	delete char_ptr;
	
	
	
	
	
	}
	
	return 0;
}

