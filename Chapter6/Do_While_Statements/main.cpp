/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/*******************************************

   do..while statements

 ******************************************/

#include <iostream>

using namespace std;  //introduces namespace std

int main()
{	
  {
    int count = 0;
    
    do {
      cout<<"Count = "<<count<<endl;
    
    }while(count++ < 3);
  
  
  
  }
  
  {
   int count = 0;

   while(count <= 3){
	cout<<"Loop executed ";
	cout<<count<<" times!"<<endl;
	count++;
  }
  
  
  
  }
	
	return 0;
}

