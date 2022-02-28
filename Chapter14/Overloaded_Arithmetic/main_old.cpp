/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include <iostream>
using namespace std;  
#include "gif.h"


int main()
{	
	Gif g1("rat.gif");
	cout<<g1.getSignature()<<endl;
	
	g1.getScreenDescriptor();
	
	cout<<g1.getImageWidth()<<endl;
	cout<<g1.getImageHeight()<<endl;
	cout<<g1.getGlobalFlag()<<endl;
	cout<<g1.getBackground()<<endl;
	
	g1.loadImage();
	
	unsigned char** image;
	
	image = g1.getImage();
	
	for(int i = 0; i<g1.getImageHeight(); i++){
		for(int j = 0; j<g1.getImageWidth(); j++)
			cout<<(unsigned)image[i][j]<<'-';
	 cout<<endl;
	}
	


	return 0;
}

