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

int main(){	
	char message[] = "Hello World!";
	char* cptr;
	int message_length = sizeof(message);
	
	for(int i = 0; i < message_length; i++){
		cout<<message[i];
	}
	
	cout<<endl;
	
	for(cptr = message; cptr != (message + message_length); cptr++){
		cout<<*cptr;
	}
	
	return 0;
}

