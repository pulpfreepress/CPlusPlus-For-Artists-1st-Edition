/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef __PERSON_FUNCTIONS_H
#define __PERSON_FUNCTIONS_H
#include "personstruct.h"

void setFirstName(Person& person, char* f_name);
void setLastName(Person& person, char* l_name);
void setHairColor(Person& person, HairColor::HairColor hair_color);
void setEyeColor(Person& person, EyeColor::EyeColor eye_color);
char* getFirstName(Person& person);
char* getLastName(Person& person);
char* getHairColor(Person& person);
char* getEyeColor(Person& person);

#endif
