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

 For Statements

 *****************************************/

#include <iostream>

using namespace std;  //introduces namespace std

int main()
{	
	{
	 for(int i = 0; i<3; i++){
	 
	   cout<<"I equals = "<<i<<endl;
	 }
	
	}
	
	{
	
	for(int i = 0; i<3; i++){
	
	  // i is in scope here
	}
	
	int i = 0;
	
	}
	/****************************************
	
	{
	 for(int i = 1, total = 0; i<=100; i++){
	 
	   total += i;
	   
	   cout<<"i = "<<i<<" ";
	   cout<<"Total = "<<total<<endl;
	 
	 }
	
	}
	
	**************************************
	
	{
	
	 for(int i = 0; i<3; i++){
	 	cout<<"i = "<<i<<endl;
	 	for(int j = 0; j<3; j++){
	 	   cout<<"j = "<<j<<endl;
	 	 }
	 }
	
	
	}
	
	***********************************/
	
	{
	
	 for(int i = 0; i<3; i++){
	 	cout<<"i = "<<i<<endl;
	 	for(int j = 0; j<3; j++){
	 	   cout<<"j = "<<j<<endl;
	 	   if(j == 1)
	 	      break;
	 	 }
	 }
	
	
	}
	
	/***************************************
	
	{
	 
	 bool done = false;
	 int count = 0;
	 
	 
	 while(!done){
	  
	   cout<<"count = "<<count<<endl;
	   while(true){
	    if(count++ <= 6){
	       if(count == 5){
	         done = true;
	         continue;
	        }
	    } else {
	         break;
	         }
	    break;
	   }
	 }
	}
	
	
	**********************************
	{
	char ch = ' ';
	int count = 0;
	
	cout<<"Enter characters or numbers: "<<endl;
	
	while(cin>>ch){
	
	  if((ch >= '0') && (ch <= '9')){
	   	continue;
	   }
	   
	   cout<<"Count is "<<++count<<" and the character is "<<ch<<endl;
	   
	   if(ch == 'q'){
	   	cout<<"Goodbye!"<<endl;
	   	break;
	   	}
	  	 
	    
	}
	}
	
	*****************************************/
	
	{
	 int count = 0;
	 
	 start: cout<<"This is the start!"<<endl;
	
	 if(count++ < 3)
	 	goto start;
	 	
	 cout<<"All done!"<<endl;
	
	
	
	}
	
	
	/**********************************/
	
	{
	 int count = 0;
	 
	 while(count++ < 3)
	 	cout<<"This is the start!"<<endl;
	 	
	 cout<<"All done!"<<endl;
	
	
	
	
	}
	
	
	return 0;
}

