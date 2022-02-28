/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "gif.h"
#include <fstream.h>
using namespace std;

Gif::Gif(char* filename): global_flag(0), background(0){
	file = new fstream(filename);
	for(int i=0; i<2; i++){
	   image_width[i] = 0;
	   image_height[i] = 0;
	}
}

Gif::~Gif(){
	delete file;
}

char* Gif::getSignature(){
	file->read(signature, 6);
	signature[6] = '\0';
	return signature;
}

void Gif::getScreenDescriptor(){
	file->read(image_width, 2);
	file->read(image_height, 2);
	file->read(&global_flag, 1);
	file->read(&background, 1);

}

 int Gif::getImageHeight(){
 	return image_height[0];
 }
 
 int Gif::getImageWidth(){
 	return image_width[0];
 }
   
   
 int Gif::getGlobalFlag(){
 	return (int) global_flag;
 }
   
   
 int Gif::getBackground(){
 	return (int)background;
 }

void Gif::loadImage(){
   image = new unsigned char*[getImageHeight()];
   for(int i=0; i<getImageHeight(); i++){
   		image[i] = new unsigned char[getImageWidth()];
   	}
   		

   	for(int i=0; i<getImageHeight(); i++){
  		file->read((char*)image[i], getImageWidth());
  	}
}

unsigned char** Gif::getImage(){return image;}
