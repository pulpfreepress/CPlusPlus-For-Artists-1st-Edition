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
#include "bar.h"

int main(){	
	Foo f1(1), f2(2);
	if(f1==f2){
		cout<<"Objects have same i value!"<<endl;
		}
		else cout<<"Objects have different i value!"<<endl;
		
   Foo* fptr = new Bar(5);
   	
   	if(f1== (*fptr)){
		cout<<"Objects have same i value!"<<endl;
		}
		else cout<<"Objects have different i value!"<<endl;
		
 Bar b1(1), b2(2);
 
   if(b1==b2){
		cout<<"Objects have same i value!"<<endl;
		}
		else cout<<"Objects have different i value!"<<endl;
			
	return 0;
}

