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
#include <stdlib.h>
#include "square.h"

using namespace std;  

int main(){	
	bool keep_going = true;
	char input[25];
	
	while(keep_going){
	cout<<"Please enter a value to square: ";
	cin>>input;
	cout<<endl<<"The squared value is: "<<square(atof(input))<<endl;
	cout<<"Continue? Y or N: ";
	cin>>input[0];
	switch(input[0]){
		case 'y':
		case 'Y': break;
		case 'n':
		case 'N': keep_going = false;
				  break;
	    default: break;
	    }
	 }
	 
	return 0;
}

