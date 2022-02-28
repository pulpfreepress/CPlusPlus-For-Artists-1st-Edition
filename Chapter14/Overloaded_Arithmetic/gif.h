/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef _GIF_H
#define _GIF_H
#include <fstream.h>
using namespace std;

class Gif{
  public:
   Gif(char* filename);
   ~Gif();
   char* getSignature();
   void getScreenDescriptor();
   int getImageHeight();
   int getImageWidth();
   int getGlobalFlag();
   int getBackground();
   void loadImage();
   unsigned char** getImage();
   
   
  private:
    fstream *file;
  	char signature[7];
  	char image_height[2];
  	char image_width[2];
  	char global_flag;
  	char background;
  	unsigned char** image;
  	
};


#endif
