/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "sensor.h"
#include "engineutils.h"

int Sensor::sensor_count = 0;

Sensor::Sensor(PartStatus the_status, short the_engine_number) : 
			   Component(the_status, the_engine_number), its_status(SENSING_ENABLED),
			    its_calibration(CALIBRATED){
	   sensor_count++;
	    #if MESSAGE_TRACE 
 	     cout<<"Sensor Object Created!"<<endl;
 	    #endif
}

Sensor::~Sensor(){ 
     sensor_count--;
      #if MESSAGE_TRACE 
 	  cout<<"Sensor Object Destroyed!"<<endl;
 	 #endif
     }

void Sensor::enableSensing(){its_status = SENSING_ENABLED;}

void Sensor::disableSensing(){its_status = SENSING_DISABLED;}


void Sensor::calibrate(){ its_calibration = CALIBRATED;}

void Sensor::unCalibrate(){its_calibration = UNCALIBRATED;}

bool Sensor::isWorkingProperly(){
	bool return_val = false;
	 switch(its_calibration){
        case CALIBRATED :  switch(its_status){
        					 case SENSING_ENABLED : setStatus(WORKING);
      				   		                        return_val = true;
      				                                break;
      				         case SENSING_DISABLED : setStatus(NOTWORKING);
      				         						 return_val = false;
      				         						 break;
      				         default: break;
      				       }
      	case UNCALIBRATED : setStatus(NOTWORKING);
      						disableSensing();
      				   	    break;
      	default: break;
      }
      				
  
  return return_val;
}

int Sensor::getSensorCount(){ return sensor_count;}
