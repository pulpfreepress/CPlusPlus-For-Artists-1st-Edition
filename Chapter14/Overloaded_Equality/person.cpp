/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include	"person.h"
#include	"person.h"
#include <string.h>
#include <iostream>
#include <fstream>
using namespace std;


Person::Person( char*  _f_name, char*  _m_name, char* _l_name, char _sex, int _age ):sex(_sex), 
				age(_age), name_changed(true), full_name(NULL){
	f_name = new char[strlen(_f_name)+1];
	strcpy(f_name, _f_name);
	
	m_name = new char[strlen(_m_name)+1];
	strcpy(m_name, _m_name);
	
	l_name = new char[strlen(_l_name)+1];
	strcpy(l_name, _l_name);
	
}


Person::~Person(){
   delete[] f_name;
   delete[] m_name;
   delete[] l_name;
   delete[] full_name;
}


Person::Person(Person&  person):name_changed(true), full_name(NULL){
    f_name = new char[strlen(person.f_name)+1];
	strcpy(f_name, person.f_name);
	
	m_name = new char[strlen(person.m_name)+1];
	strcpy(m_name, person.m_name);
	
	l_name = new char[strlen(person.l_name)+1];
	strcpy(l_name, person.l_name);
	
	sex = person.sex;
	age = person.age;
    
}

Person& Person::operator=( Person& rhs ){
	delete[] f_name;
    f_name = new char[strlen(rhs.f_name)+1];
	strcpy(f_name, rhs.f_name);
	
	delete[] m_name;
	m_name = new char[strlen(rhs.m_name)+1];
	strcpy(m_name, rhs.m_name);
	
	delete[] l_name;
	l_name = new char[strlen(rhs.l_name)+1];
	strcpy(l_name, rhs.l_name);
	
	name_changed = true;
	
	return *this;
  
}

void Person::setFirstName(char* f_name){
	delete[] this->f_name;
	 this->f_name = new char[strlen(f_name)+1];
	strcpy(this->f_name, f_name);
	
	name_changed = true;
        
}

void Person::setMiddleName(char* m_name){
     delete[] this->m_name;
	 this->m_name = new char[strlen(m_name)+1];
	strcpy(this->m_name, m_name);
	
	name_changed = true;
  
}

void Person::setLastName(char* l_name){
     delete[] this->l_name;
	 this->l_name = new char[strlen(l_name)+1];
	strcpy(this->l_name, l_name);
	
	name_changed = true;
}

void Person::setAge( int age ){
         this->age = age;
}


void Person::setSex( char sex ){
      this->sex = sex;
}

char* Person::getFullName(){ 

	if((full_name != NULL) && (!name_changed))
		return full_name;
	    else {
			
			delete[] full_name;
			full_name = new char[(strlen(f_name)  + strlen(m_name)
						   + strlen(l_name) + 7)];
			
		    strcpy(full_name, f_name);
		    strcat(full_name, " ");
		    strcat(full_name, m_name);
		    strcat(full_name, " ");
		    strcat(full_name, l_name);
		
		    name_changed = false;
			return full_name;
	}
	

}

char* Person::getFirstName(){ return f_name;}


char* Person::getMiddleName(){ return m_name;}


char* Person::getLastName(){ return l_name;}


char Person::getSex(){ return sex;}


int Person::getAge(){ return age;}

/****************************************************
	Overloaded IOStream Friend Functions
*****************************************************/

ofstream& operator<<(ofstream& out, Person& p){
	out<<p.f_name<<"|"<<p.m_name<<"|"<<p.l_name<<"|"<<p.sex<<"|"<<p.age<<"|"<<endl;
	return out;
}
		
ifstream& operator>>(ifstream& in, Person& p){
    char temp[31];
    temp[0] = '\0';
    in.getline(temp, 30, '|');
    
    if(temp[0]){
    
      delete[] p.f_name;
      p.f_name = new char[strlen(temp)+1];
	  strcpy(p.f_name, temp);
	
	  in.getline(temp, 30, '|');
	   delete[] p.m_name;
	   p.m_name = new char[strlen(temp)+1];
	   strcpy(p.m_name, temp);
	
	  in.getline(temp, 30, '|');
	   delete[] p.l_name;
	   p.l_name = new char[strlen(temp)+1];
	   strcpy(p.l_name, temp);
	   
	   in.getline(temp, 30, '|');
	   p.sex = temp[0];
	   
	   in.getline(temp, 30, '|');
	   p.age = atoi(temp);
	
	   p.name_changed = true;
	   return in;
	 }else return in;
}
		
ostream& operator<<(ostream& out, Person& p){
  out<<p.f_name<<"  "<<p.m_name<<"  "<<p.l_name<<"  "<<p.sex<<"  "<<p.age<<endl;
  return out;
}

/*******************************************************
   Overloaded Relational Operators
 ******************************************************/
bool Person::operator<(Person& rhs){return (age < rhs.age);}

bool Person::operator>(Person& rhs){return (age > rhs.age);}

bool Person::operator<=(Person& rhs){return (age <= rhs.age);}

bool Person::operator>=(Person& rhs){return (age >= rhs.age);}


/*********************************************************
   Overloaded equality operators
 *********************************************************/
 bool Person::operator==(Person& rhs){
   return (this == (&rhs));
 }
 
 bool Person::operator!=(Person& rhs){
    return (this != (&rhs));
 }
