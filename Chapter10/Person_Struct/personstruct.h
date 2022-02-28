/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef __PERSON_STRUCT_H
#define __PERSON_STRUCT_H


namespace HairColor{
	enum HairColor {Black, Red, Auburn, Brown, Blond, Silver, Grey};
	
}

namespace EyeColor{
	enum EyeColor {Black, Hazel, Blue, Brown};
}

const int NAMESIZE = 26;

struct Person {

	char f_name[NAMESIZE];
	char l_name[NAMESIZE];
	HairColor::HairColor hair_color;
	EyeColor::EyeColor eye_color;
};


#endif
