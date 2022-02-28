/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/****************************************
  Control Flow Statement Examples
  

 *****************************************/

#include <iostream>

using namespace std;  //introduces namespace std

int main()
{	
	
	cout<<"*********** if statement ***************************"<<endl;
	
	{
	  int a = 0, b = 1;
	  if(a++ > b)
	  cout<<"a is greater than b"<<endl;
	}
	
	{
	  int a = 0;
	  if(a = 3)
	  	cout<<"Assignment statements can be conditions too!"<<endl;  //should generate warning!!
	
	}
	
	{
	  
	  if(int a = 3)
	  	cout<<"Assignments are allowed in the condition!"<<endl;
	  
	  int a = 0;
	
	}
	
	{
	
	  int a = 0, b = 1;
	  
	  if(++a == b){
	    int c = 2;
	  	cout<<"The value of a is: "<<a++<<endl;
	  	cout<<"The value of b is: "<<b<<endl;
	  	cout<<"The value of c is: "<<c<<endl;
	  	cout<<"The value of a is: "<<a<<endl;
	  
	  }
	
	
	}
	
	cout<<"*********** if..else statement ***************************"<<endl;
	
	{
	 int a = 0;
	 
	 if(a)
	 	cout<<"True statement."<<endl;
	 	else
	 	  cout<<"False statement."<<endl;
	
	}
	
	{
	 int a = 0;
	 
	 if(!a)
	 	cout<<"True statement."<<endl;
	 	else
	 	  cout<<"False statement."<<endl;
	
	}
	
	{
	 int a = 1;
	 
	 cout<<"!a: "<<!a<<endl;
	 cout<<"a : "<<a<<endl;
	 
	 if(!a){
	 	int b = 1;
	 	cout<<"The value of a: "<<a++<<endl;
	 	cout<<"The value of b: "<<b<<endl;
	 	}
	 	else{
	 	 int b = 2;
	 	  cout<<"The value of a: "<<a<<endl;
	 	  cout<<"The value of b: "<<b<<endl;
	 	 }
	  cout<<"The value of a outside if: "<<a<<endl;
	
	
	}
	
	{
	 cout<<"Enter the character a, b, or c: ";
	 char input;
	 cin>>input;
	 
	 if(input == 'a')
	   cout<<"You entered a."<<endl;
	   else if(input == 'b')
	   		cout<<"You entered b."<<endl;
	   		else if(input == 'c')
	   			 cout<<"You entered c."<<endl;
	   			 else
	   			   cout<<"You entered the wrong character!"<<endl;
	   			    
	
	
	
	}
	
	{
	cout<<"Enter the character a, b, or c: ";
	char input1;
	cin>>input1;
	
	cout<<"Enter the character u or p: ";
	char input2;
	cin>>input2;
	
	if(input1 == 'a'){
		
		 cout<<"You entered a."<<endl;
	    if(input2 == 'u')
	        cout<<"You entered u."<<endl;
	        else if(input2 == 'p')
	            cout<<"You entered p."<<endl;
	              else
	                cout<<"You didn't enter u or p!"<<endl;
	
	}else if(input1 == 'b'){
	
	 cout<<"You entered b."<<endl;
	    if(input2 == 'u')
	        cout<<"You entered u."<<endl;
	        else if(input2 == 'p')
	            cout<<"You entered p."<<endl;
	              else
	                cout<<"You didn't enter u or p!"<<endl;
	
	}else if(input1 == 'c'){
	
	 cout<<"You entered c."<<endl;
	    if(input2 == 'u')
	        cout<<"You entered u."<<endl;
	        else if(input2 == 'p')
	            cout<<"You entered p."<<endl;
	              else
	                cout<<"You didn't enter u or p!"<<endl;
	
	
	}else {
	   cout<<"You didn't enter a, b, or c!"<<endl;
	    if(input2 == 'u')
	        cout<<"You entered u."<<endl;
	        else if(input2 == 'p')
	            cout<<"You entered p."<<endl;
	              else
	                cout<<"You didn't enter u or p!"<<endl;
	       }
	
	}
	
	
	
	cout<<"************ switch statement ***************"<<endl;
	
	{
	
	  cout<<"Enter the character a, b, or c: ";
	char input1;
	cin>>input1;
	
	cout<<"Enter the character u or p: ";
	char input2;
	cin>>input2;
	
	
	switch(input1){
	
	    
	
	
		case 'a':{
		
		   cout<<"You entered a."<<endl;
			     
		   switch(input2){
			     
			    case 'u': cout<<"You entered u."<<endl;
			              break;
			        
			    case 'p' : cout<<"You entered p."<<endl;
			               break;
			                   
			    default : cout<<"You didn't enter u or p!"<<endl;
			     
			     }
		
		
		  break;
		 }
		
		
		case 'b':{
		   cout<<"You entered b."<<endl;
		    switch(input2){
			     
			    case 'u': cout<<"You entered u."<<endl;
			              break;
			        
			    case 'p' : cout<<"You entered p."<<endl;
			               break;
			                   
			    default : cout<<"You didn't enter u or p!"<<endl;
			     
			     }
		
		break;
		}
		
		
		case 'c': {
		
		    cout<<"You entered c."<<endl;
		     switch(input2){
			     
			    case 'u': cout<<"You entered u."<<endl;
			              break;
			        
			    case 'p' : cout<<"You entered p."<<endl;
			               break;
			                   
			    default : cout<<"You didn't enter u or p!"<<endl;
			     
			     }
		
		
		break;
		}
		
		default: {
		
		     cout<<"You didn't enter a, b, or c!"<<endl;
		      switch(input2){
			     
			    case 'u': cout<<"You entered u."<<endl;
			              break;
			        
			    case 'p' : cout<<"You entered p."<<endl;
			               break;
			                   
			    default : cout<<"You didn't enter u or p!"<<endl;
			     
			     }
		
		
		}
		
	
	
	
	
	
	}
	
	
	
	
	
	
	
	
	
	}
	
	
	
	
	
	return 0;
}

