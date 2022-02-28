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
#include "foo.h"

int main(){	
	
	Foo f1(3), f2(4);
	
	f1+=f2;
	 cout<<f1.getI()<<endl;
	 
	 f1<<5;
	 
	  cout<<f1.getI()<<endl;
	  
	 f1&0xfab5;
	
	 cout<<f1.getI()<<endl;
	 
	 f1 = f1(3, 4);
	 
	  cout<<f1.getI()<<endl;
	  
	  f1 = f1 + f2;
	   cout<<f1.getI()<<endl;
	   
	  f1 = (+f1);
	  
	   cout<<f1.getI()<<endl;
	  
	f1 = (-f1);
	
	
	   cout<<f1.getI()<<endl;
	   
	int i = f1->getI();
	
	cout<<i<<endl;
	
	f1,1,f2;
	 
	return 0;
}

