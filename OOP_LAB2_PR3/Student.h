#pragma once




#include "Fackultet.h"

#include "Zalikovka.h"


#include <list>

class Student
{
private:
	string first_name;
	string last_name;
	string patronimic;
	int *bithrday_date[3];
	string adress;

	Specialnist* specialnist;

	

	


public:

	Zalikovka* zalikovka;

	Student(string first_name, string last_name,string patronimic, int *bithrday_date[3], string adress);

	void specialnist_set(Specialnist* spec);


	



};

