/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef ROBOT_RAT_H
#define ROBOT_RAT_H
#include "abstractcontrolledrodent.h"

class RobotRat : public AbstractControlledRodent {
  public:
  	RobotRat(int row_boundary = 20, int column_boundary = 20);
  	virtual ~RobotRat();
  	RobotRat(RobotRat& rhs);
  	RobotRat& operator=(RobotRat& rhs);
  	void setTailUp();
  	void setTailDown();
  	char* getObjectType();


};
#endif
