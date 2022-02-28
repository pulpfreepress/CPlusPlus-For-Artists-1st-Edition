/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "rodentworld.h"
#include "robotrat.h"

RodentWorld::RodentWorld(int rows, int columns):its_rows(rows),its_columns(columns), 
                                                number_of_rodents(1), rodent_number(0){
   rodent_array = new AbstractControlledRodent*[number_of_rodents];
   rodent_array[0] = new RobotRat(its_rows, its_columns);
   
}


RodentWorld::~RodentWorld(){
  for(int i = 0; i<number_of_rodents; i++){
    delete rodent_array[i];
  }
  
  delete[] rodent_array;

}


void RodentWorld::addRodent(){
 //save current number of rodents
 int old_number_of_rodents = number_of_rodents;
 
 //create temp array same size as current array
 AbstractControlledRodent **temp_array = new AbstractControlledRodent*[number_of_rodents];
 
 //assign rodents to temp array
 for(int i=0; i<number_of_rodents; i++){
   temp_array[i] = rodent_array[i];
 }
 
 
  //then delete rodent array
  delete[] rodent_array;
  
  //now, create new rodent array one bigger than old rodent array
  rodent_array = new AbstractControlledRodent*[++number_of_rodents];
  
  //copy temp rodent objects into new rodent array
  for(int i=0; i<old_number_of_rodents; i++){
   rodent_array[i] = temp_array[i];
  }
  
  //add new rodent object to the last array element
  rodent_array[number_of_rodents-1] = new RobotRat(its_rows, its_columns);

  
  //delete temp array
  delete[] temp_array;
  toggleRodent();
}

void RodentWorld::deleteRodent(){
   //delete currently selected rodent object
   delete rodent_array[rodent_number];
   
   //then set pointer to null
   rodent_array[rodent_number] = NULL;
   
   //save previous number of rodents
   int old_number_of_rodents = number_of_rodents;
   
   //create temp array one smaller than rodent aray
   AbstractControlledRodent **temp_array = new AbstractControlledRodent*[--number_of_rodents];
 
   //copy surviving rodent objects to temp array
   {
   int i(0), j(0);
   while(i < old_number_of_rodents){
      if(rodent_array[i] != NULL){
      temp_array[j++] = rodent_array[i++];
      }else{i++;}
    }
   }
 
    //delete rodent_array
    delete[] rodent_array;
  
    //create new rodent  array one smaller than old array
    rodent_array = new AbstractControlledRodent*[number_of_rodents];
  
   //Assign rodents from temp array
   for(int i=0; i<number_of_rodents; i++){
   rodent_array[i] = temp_array[i];
   }
  
  //delete temp array
  delete[] temp_array;

   toggleRodent();
}

void RodentWorld::toggleRodent(){
  if(rodent_number < (number_of_rodents-1)){
  	 rodent_number++;
    }else{
       rodent_number = 0;
      }
 
 }


void RodentWorld::turnRodentLeft(){
   rodent_array[rodent_number]->turnLeft();
}


void RodentWorld::turnRodentRight(){
   rodent_array[rodent_number]->turnRight();
}


void RodentWorld::moveRodent(int spaces){
   rodent_array[rodent_number]->move(spaces);
 }


void RodentWorld::setRodentTailUp(){
  rodent_array[rodent_number]->setTailUp();
}


void RodentWorld::setRodentTailDown(){
  rodent_array[rodent_number]->setTailDown();
}

char* RodentWorld::getRodentType(){
   return rodent_array[rodent_number]->getObjectType();
 }
 
 bool RodentWorld::isRodentTailDown(){
   return rodent_array[rodent_number]->isMarkerDown();
 }
 
 int RodentWorld::getRodentRow(){
   return rodent_array[rodent_number]->getRow();
 }
 
 int RodentWorld::getRodentColumn(){
   return rodent_array[rodent_number]->getColumn();
 }
