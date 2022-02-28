/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/*********************************************

   While statements

 *********************************************/

#include <iostream>

using namespace std;  //introduces namespace std

int main()
{	
	/*******************************
	{
	
	int count = 0;
	
	while(count++ < 5){
		cout<<"Count = : "<<count<<endl;
		}
	
	}
	 
	 
	 
	******************************
	{
	char input;
	 while(cin.get(input)){
	 
	  cout.put(input);
	  	cin.clear();
	  	cin.ignore(INT_MAX, '\n');
	   
	 
	 }
	}
	
	***************************
	
	{
	 char keep_going = 'y';
	 float input = 0, total = 0, average = 0;
	 int count = 0;
	 
	 
	 while((keep_going == 'y') || (keep_going == 'Y')){
	  
	  cout<<"Enter a number: ";
	  cin>>input;
	  
	  total += input;
	  average = total/++count;
	
	  
	  cout<<endl;
	  cout<<"The average is: "<<average<<endl;
	  
	  cin.clear();
	  cin.ignore(INT_MAX, '\n');
	  
	  cout<<"Enter 'Y' to continue or any other key to exit: ";
	  cin>>keep_going;
	 
	 }
	}
	*************************************
	{
	float total = 0, average = 0, input = 0;
	int count = 0;
	
	while(input >= 0){
	
	  cout<<"Please enter a positive number to average "
	      <<" or negative number to exit: ";
	  cin>>input;
	  
	  if(!cin){
	    cin.clear();
	    cin.ignore(INT_MAX, '\n');
	  }else if(input >= 0){
	        total += input;
	        average = (total/(++count));
	        cout<<"The average is: "<<average<<endl;
	        }
	  
	  
	
	}

	}
	****************************************
	{
	 int count = 0;
	 
	 while(true){
	  cout<<count<<", ";
	  if(++count == 10)
	     break;
	 }
	}
	*****************************************
	
	{
	 char input = ' ';
	 
	 while(true){
	   cout<<"Enter a character: ";
	   cin>>input;
	 
	switch(input){
	
	  case 'a':
	  case 'A': cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'b':
	  case 'B': cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'c':
	  case 'C':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'd':
	  case 'D':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'e':
	  case 'E':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'f':
	  case 'F':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'g':
	  case 'G':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'h':
	  case 'H':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'i':
	  case 'I':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'j':
	  case 'J':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'k':
	  case 'K':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'l':
	  case 'L':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'm':
	  case 'M':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'n':
	  case 'N':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'o':
	  case 'O':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'p':
	  case 'P':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'q':
	  case 'Q':cout<<"You entered "<<input<<"!"<<endl;
	  		   cout<<"Goodbye!";
	  		   exit(EXIT_SUCCESS);
	  
	  case 'r':
	  case 'R':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 's':
	  case 'S':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 't':
	  case 'T':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'u':
	  case 'U':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'v':
	  case 'V':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'w':
	  case 'W':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'x':
	  case 'X':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'y':
	  case 'Y':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	  
	  case 'z':
	  case 'Z':cout<<"You entered "<<input<<"!"<<endl;
	  			break;
	
	  default: cout<<"Character not part of alphabet!"<<endl;
	           break;
	} 
	 }
	
	}
	
	**************************************************
	
	{
	  bool done = false;
	  int inner_count = 0, outer_count = 0;
	  
	  while(!done){
	  
	   while(inner_count < 3){
	    cout<<"Inner count is: "<<inner_count++<<endl;
	    
	   }
	    if(outer_count++ > 3){
	    	done = true;
	    }
	    
	    inner_count = 0;
	  
	    
	  }
	}
	
	{
	  while(true){ break; }
	  
	  while(1){ break; }
	
	}
	
	*******************************************
	
	{
	 int inner_loop = 0, outer_loop = 0;
	 
	 while(outer_loop++ < 3){
	 
	     cout<<"Outer loop = "<<outer_loop<<endl;
	     
	     while(true){
	     
	     	if(inner_loop++ < 3)
	     	
	     		cout<<"Inner loop = "<<inner_loop<<endl;
	     		
	     		else break;
	     
	     
	     }
	 
	 
	 
	 }
	
	
	
	
	}
	
	***************************************/
	
	
	{
	  int i=0;
	  while(i<3){
	    cout<<"i= "<<i<<endl;
	    continue;                //i will never increment - you will loop forever!
	    i++;
	  }
	
	
	
	
	}
	
	
	
	
	return 0;
}

