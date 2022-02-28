/***********************************************************     Copyright 2003 Rick Miller - Pulp Free Press           This source code accompanies the text C++ For Artists     and is provided for instructional purposes only. No      warranty concerning the quality of the code is expressed     or implied.	 You are free to use this code in your programs so long	 as this copyright notice is included in its entirety.**********************************************************/#include "controller.h"Controller::Controller(){   its_ui = new UserInterface();   its_world = new RodentWorld(its_ui->getRows(), its_ui->getColumns());}Controller::~Controller(){    delete its_ui;    delete its_world;}void Controller::run(){  while(true){   its_ui->displayMenu();   switch(its_ui->getMenuChoice()){     case           ADD: its_world->addRodent();                         break;     case        TOGGLE: its_world->toggleRodent();                         break;     case     TURNRIGHT: its_world->turnRodentRight();                         break;     case      TURNLEFT: its_world->turnRodentLeft();                         break;     case        TAILUP: its_world->setRodentTailUp();                         break;     case      TAILDOWN: its_world->setRodentTailDown();                         break;     case          MOVE: move();                         break;     case  DISPLAYFLOOR: its_ui->displayFloor();                         break;     case          EXIT: exit(0);                         break;     default:            break;   }  }}void Controller::move(){   int spaces = its_ui->getSpaces();    while(spaces--){       if(its_world->isRodentTailDown()){         its_ui->markFloor(its_world->getRodentRow(), its_world->getRodentColumn());         its_world->moveRodent(1);       } else its_world->moveRodent(1);        }}