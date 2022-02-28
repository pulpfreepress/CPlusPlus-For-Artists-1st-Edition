/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "personstruct.h"
#include <string.h>

char HairColorStrings[][7] = {{"Black"},
								 {"Red"},
								 {"Auburn"},
								 {"Brown"},
								 {"Blond"},
								 {"Silver"},
								 {"Grey"}};
								 
char EyeColorStrings [][7] = {{"Black"},
								 {"Hazel"},
								 {"Blue"},
								 {"Brown"}};



void Person::setFirstName(char* _f_name){
    strcpy(f_name, _f_name);
}


void Person::setLastName(char* _l_name){
	strcpy(l_name, _l_name);
}


void Person::setHairColor(HairColor::HairColor _hair_color){
	hair_color = _hair_color;
}


void Person::setEyeColor(EyeColor::EyeColor _eye_color){
	eye_color = _eye_color;
}

char* Person::getFirstName(){
	return f_name;
}


char* Person::getLastName(){
	return l_name;
}


char* Person::getHairColor(){

	char* h_color = NULL;
	switch(hair_color){
	
		case HairColor::Black : h_color = HairColorStrings[HairColor::Black];
								break;
								
	   case HairColor::Red : h_color = HairColorStrings[HairColor::Red];
								break;
							
	   case HairColor::Auburn : h_color = HairColorStrings[HairColor::Auburn];
								break;
		
	   case HairColor::Brown : h_color = HairColorStrings[HairColor::Brown];
								break;
								
	   case HairColor::Blond : h_color = HairColorStrings[HairColor::Blond];
								break;
		
		case HairColor::Silver : h_color = HairColorStrings[HairColor::Silver];
								break;
	    
	    case HairColor::Grey : h_color = HairColorStrings[HairColor::Grey];
								break;
								
		default : h_color = HairColorStrings[HairColor::Blond];
	
	}
	
	return h_color;
	
}

char* Person::getEyeColor(){
	
	char* e_color = NULL;
	switch(eye_color){
	
		case EyeColor::Black : e_color = EyeColorStrings[EyeColor::Black];
								break;
		
		case EyeColor::Hazel : e_color = EyeColorStrings[EyeColor::Hazel];
								break;
														
		case EyeColor::Blue : e_color = EyeColorStrings[EyeColor::Blue];
								break;						
	
		case EyeColor::Brown : e_color = EyeColorStrings[EyeColor::Brown];
								break;
								
		default : e_color = EyeColorStrings[EyeColor::Blue];
	}
   return e_color;
}

