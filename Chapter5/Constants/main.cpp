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

using namespace std;  						//introduces namespace std

int main()
{
	#define MAX_NUM 25    					// c-style constant defined with preprocessor directive
	
	cout<<MAX_NUM<<endl;					// value of 25 substituted during preprocessing
	
    const int const_val = 100;				// C++ style constant declared & initialized
    
   /* const_val = 30;						// *** ERROR *** cannot modify constant      */
    
    
    int * int_ptr = (int*) &const_val;		// pointer declared and address of constant assigned
    
    *int_ptr = 30;							// attempt to modify const through pointer, results undefined
    
    cout<<const_val<<endl;					// See what happened to values
    cout<<*int_ptr<<endl;
    cout<<const_val<<endl;
    
	return 0;
}

