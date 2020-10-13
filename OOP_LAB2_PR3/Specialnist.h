#pragma once

#include "Predmet.h"

class Specialnist
{
private:
	string name;

	list<Predmet*> predmeti;

public:

	string GetName();

	Specialnist(string name);

	void Predmet_Add(string name);

	Predmet* Predmet_Get(string name);

	list<Predmet*> Predmet_list_Get();




};

