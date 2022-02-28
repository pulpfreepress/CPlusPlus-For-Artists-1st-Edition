/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/**********************************************************

   						  Literals

**********************************************************/

#include <iostream>

using namespace std;  //introduces namespace std

int main()
{	
   /*****************************************
   
           Integer Literals
   
   ***************************************/

	int i = 25;					// decimal
	int j = 025;				// octal
	int k = 0xaf;				// hexadecimal
	int l = -23;
	
	
	cout<<i<<endl;
	cout<<j<<endl;
	cout<<k<<endl;
	cout<<l<<endl;
	cout<<0xafff<<endl;
	
	cout<<10<<endl;
	cout<<012<<endl;
	cout<<0xA<<endl;
	
	unsigned short small_fry = 0xffffffff;
	
	unsigned int tough_guy = 0xffffffff;
	
	
	cout<<small_fry<<endl;
	cout<<tough_guy<<endl;
	
	cout<<sizeof tough_guy<<endl;
	
	cout<<"*******************************"<<endl;
	
	/*****************************************
   
          Character Literals
   
   ***************************************/
   
   char c = '\?';
   
   cout<<c<<endl;
   
   char c2 = 'Help';
   
   cout<<c2<<endl;
   
   unsigned int c3 = 'Help';
   
   cout<<c3<<endl;
   
   char c4 = '\?';
   
   cout<<c4<<endl;
   
   int c5 = '\'\?';
   
   cout<<c5<<endl;
   
   char c6 = '\x70';
   
   cout<<c6<<endl;
   
   char c7 = '\230';
   
   cout<<c7<<endl;
   
   char c8 = '\xC0';
   
   cout<<c8<<endl;
   
   
   
   cout<<"**************************************"<<endl;
   
   /******************************************
   
          String Literals
   
   *******************************************/
   
   char *s = "Hello World!";
   
   cout<<s<<endl;
   
   
   char char_array[] = "Strings have type array of chars...";
   
   cout<<char_array<<endl;
   
   
   char another_way[] = {'H','e','l','l','o','\0'};
   
   cout<<another_way<<endl;
   
   cout<<sizeof *s<<endl;
   
   cout<<sizeof char_array<<endl;
   
   cout<<sizeof another_way<<endl;
   
   wchar_t wide_char_array[] = L"Monkey's Uncle";
   
   cout<<wide_char_array<<endl;
   
   cout<<L"Monkey's Uncle"<<endl;
   
   cout<<"The man yelled, \"Run Jimmy, run!\""<<endl;
   
   
   cout<<"**************************************"<<endl;
   
    /******************************************
   
         Float Literals
   
   *******************************************/
   
   
   double d = -2.3456e+2;
   
   cout<<d<<endl;
   
   double d2 = 2e+3;
   
   cout<<d2<<endl;
   
   double d3 = -2e3;
   
   cout<<d3<<endl;
   
   /*********************************************
   
      boolean literals
   
   ********************************************/
   
   bool keep_going = true;
   
   cout<<true<<" "<<false<<endl;
   
	
	
	return 0;
}

