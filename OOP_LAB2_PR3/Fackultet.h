#pragma once

#include <iostream>

#include "Specialnist.h"



#include <list>

using namespace std;

class Fackultet
{
	string name;

	list<Specialnist*> Specialnosti;


public:
	Fackultet(string name);

	void SetName(string name);

	string GetName();

	void Specialnist_Add(string name);

	list<Specialnist*> Specialnist_list_Get();

	Specialnist* Specialnist_Get(string name);

	

	//Vikladach* vikladach_Get(Predmet* name);

	//static list<Vikladach*> Vikladachi;

};

