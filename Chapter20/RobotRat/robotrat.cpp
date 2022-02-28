/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "robotrat.h"

RobotRat::RobotRat(int row_boundary, int column_boundary){
   setBoundaries(row_boundary, column_boundary);

}

RobotRat::~RobotRat(){}

RobotRat::RobotRat(RobotRat& rhs){
   setBoundaries(rhs.getUpperRowBoundary(), rhs.getUpperColumnBoundary());
   if(rhs.isMarkerDown()){
     this->setMarkerDown();
   }else{
      this->setMarkerUp();
   }
   
   this->setPosition(rhs.getRow(), rhs.getColumn());

}

RobotRat& RobotRat::operator=(RobotRat& rhs){

   this->setBoundaries(rhs.getUpperRowBoundary(), rhs.getUpperColumnBoundary());
   if(rhs.isMarkerDown()){
     this->setMarkerDown();
   }else{
      this->setMarkerUp();
   }
  
   this->setPosition(rhs.getRow(), rhs.getColumn());
   return *this;
}


void RobotRat::setTailUp(){
   setMarkerUp();
}

void RobotRat::setTailDown(){
    setMarkerDown();
 }
 
 char* RobotRat::getObjectType(){
    return "RobotRat";
 }
