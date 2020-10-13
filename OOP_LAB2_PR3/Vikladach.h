#pragma once

#include <iostream>

#include <sstream>

#include "Predmet.h"

#include <list>

using namespace std;

class Vikladach
{

private:
	string first_name;
	string last_name;
	string patronimic;
	int *bithrday_date[3];
	string adress;
	

	


public:

	list<Predmet*> Predmeti;

	Vikladach(string first_name, string last_name, string patronimic, int* bithrday_date[3], string adress);

	void Set_first_Name(string text);

	string Get_first_Name();

	void Set_last_Name(string text);

	string Get_last_Name();

	void Set_patronimic(string text);

	string Get_patronimic();

	void Set_date(int *mas[3]);

	void Set_date(string date);

	string Get_date();

	void Set_adress(string text);

	string Get_adress();
	

	void vikladach_Add(Vikladach* vikladach);

	

};

