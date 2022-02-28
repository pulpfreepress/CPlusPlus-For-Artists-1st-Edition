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
#include "personfunctions.h"
#include "string.h"

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



void setFirstName(Person& person, char* f_name){
    strcpy(person.f_name, f_name);
}


void setLastName(Person& person, char* l_name){
	strcpy(person.l_name, l_name);
}


void setHairColor(Person& person, HairColor::HairColor hair_color){
	person.hair_color = hair_color;
}


void setEyeColor(Person& person, EyeColor::EyeColor eye_color){
	person.eye_color = eye_color;
}

char* getFirstName(Person& person){
	return person.f_name;
}


char* getLastName(Person& person){
	return person.l_name;
}

char* getHairColor(Person& person){

	char* hair_color = NULL;
	switch(person.hair_color){
	
		case HairColor::Black : hair_color = HairColorStrings[HairColor::Black];
								break;
								
	   case HairColor::Red : hair_color = HairColorStrings[HairColor::Red];
								break;
							
	   case HairColor::Auburn : hair_color = HairColorStrings[HairColor::Auburn];
								break;
		
	   case HairColor::Brown : hair_color = HairColorStrings[HairColor::Brown];
								break;
								
	   case HairColor::Blond : hair_color = HairColorStrings[HairColor::Blond];
								break;
		
		case HairColor::Silver : hair_color = HairColorStrings[HairColor::Silver];
								break;
	    
	    case HairColor::Grey : hair_color = HairColorStrings[HairColor::Grey];
								break;
								
		default : hair_color = HairColorStrings[HairColor::Blond];
	
	}
	
	return hair_color;
	
}

char* getEyeColor(Person& person){
	
	char* eye_color = NULL;
	switch(person.eye_color){
	
		case EyeColor::Black : eye_color = EyeColorStrings[EyeColor::Black];
								break;
		
		case EyeColor::Hazel : eye_color = EyeColorStrings[EyeColor::Hazel];
								break;
														
		case EyeColor::Blue : eye_color = EyeColorStrings[EyeColor::Blue];
								break;						
	
		case EyeColor::Brown : eye_color = EyeColorStrings[EyeColor::Brown];
								break;
								
		default : eye_color = EyeColorStrings[EyeColor::Blue];
	}
   return eye_color;
}


