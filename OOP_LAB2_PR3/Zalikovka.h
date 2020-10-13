#pragma once
#include "Vikladach.h"

class Zalikovka //Клас асоціації
{

private:

	list<int> numeration;

	list<Vikladach*> vicladachi;
	
	list<Predmet*> Predmeti;

	list<int> Bali;


public:


	Zalikovka();

	void zapis_add(Vikladach* vik, Predmet* pred);

	string zapis_read(int number);

};

