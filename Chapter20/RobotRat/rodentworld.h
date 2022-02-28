/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef RODENT_WORLD_H
#define RODENT_WORLD_H

#include "abstractcontrolledrodent.h"
#include <cstddef>

class RodentWorld {
  public:
  	RodentWorld(int rows = 20, int columns = 20);
  	virtual ~RodentWorld();
  	void addRodent();
  	void deleteRodent();
  	void toggleRodent();
        void turnRodentLeft();
        void turnRodentRight();
        void moveRodent(int spaces);
        void setRodentTailUp();
        void setRodentTailDown();
  	char* getRodentType();
        int getRodentRow();
        int getRodentColumn();
        bool isRodentTailDown();
  	
  	
  private:
	AbstractControlledRodent **rodent_array;
	int its_rows;
	int its_columns;
	int number_of_rodents;
	int rodent_number;

};
#endif
