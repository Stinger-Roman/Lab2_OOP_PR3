#include "Specialnist.h"


Specialnist::Specialnist(string name)
{
	this->name = name;
}

void Specialnist::Predmet_Add(string name)
{

	predmeti.push_back(new Predmet(name));

}

list<Predmet*> Specialnist::Predmet_list_Get()
{
	return predmeti;
}

string Specialnist::GetName()
{
	return name;
}

Predmet* Specialnist::Predmet_Get(string name)
{
	for (Predmet* n : this->predmeti)
	{
		if ((n->GetName()) == name)
		{
			return n;
		}
	}

	return NULL;
}
