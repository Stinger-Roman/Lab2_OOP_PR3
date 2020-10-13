#include "Predmet.h"

Predmet::Predmet(string name)
{
	this->name = name;
}

string Predmet::GetName()
{
	return name;
}

void Predmet::SetName(string name)
{
	this->name = name;
}
