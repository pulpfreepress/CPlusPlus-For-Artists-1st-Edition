/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/
#include "myenums.h"
#include <iostream>
using namespace std;  

int main(){	

	EyeColor::EyeColor my_eye_color = EyeColor::Black;
	HairColor::HairColor my_hair_color = HairColor::Black;
	
	my_eye_color = EyeColor::Brown;
	
	switch(my_eye_color){
	
	    case EyeColor::Brown: cout<<"You have brown eyes!"<<endl;
				    break;
				
        case EyeColor::Black: cout<<"You have black eyes!"<<endl;
    			    break;
    
        case EyeColor::Hazel: cout<<"You have hazel eyes!"<<endl;
    			    break;
    			
        case EyeColor::Blue: cout<<"You have blue eyes!"<<endl;
    			   break;
    
        default : cout<<"You have blue eyes!"<<endl;
    
	   }
	   
	 // my_eye_color = HairColor::Blond;
	
	
	return 0;
}

