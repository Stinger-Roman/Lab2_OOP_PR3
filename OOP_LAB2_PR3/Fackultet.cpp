#include "Fackultet.h"


Fackultet::Fackultet(string name)
{
	this->name = name;
}


void Fackultet::SetName(string name)
{
	this->name = name;
}

string Fackultet::GetName()
{
	return this->name;
}

void Fackultet::Specialnist_Add(string name)
{
	Specialnosti.push_back(new Specialnist(name));
}

list<Specialnist*> Fackultet::Specialnist_list_Get()
{
	return Specialnosti;
}

Specialnist* Fackultet::Specialnist_Get(string name)
{
	
	for (Specialnist* n : Specialnosti)
	{
		if ((n->GetName()) == name)
		{
			return n;
		}
	}

	return NULL;
	

}

/*

Vikladach* Fackultet::vikladach_Get(Predmet* predmet)
{

	for (Vikladach* n : Fackultet::Vikladachi)
	{
		for (Predmet* p : n->Predmeti)
		{
			if ((p->GetName()) == predmet->GetName())
			{
				return n;
			}
		}


	}

	return NULL;


}
*/