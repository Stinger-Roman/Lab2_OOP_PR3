#include "Vikladach.h"

void Vikladach::Set_first_Name(string text)
{
	first_name = text;
}

string Vikladach::Get_first_Name()
{
	return first_name;
}

void Vikladach::Set_last_Name(string text)
{
	last_name = text;
}

string Vikladach::Get_last_Name()
{
	return last_name;
}

void Vikladach::Set_patronimic(string text)
{
	patronimic = text;
}

string Vikladach::Get_patronimic()
{
	return patronimic;
}

void Vikladach::Set_date(int* mas[3])
{
	this->bithrday_date[0] = mas[0];
	this->bithrday_date[1] = mas[1];
	this->bithrday_date[2] = mas[2];
}



string Vikladach::Get_date()
{
	ostringstream ost;
	ost << this->bithrday_date[0];
	return ost.str();
}

void Vikladach::Set_adress(string text)
{
	adress = text;
}

string Vikladach::Get_adress()
{
	return adress;
}

Vikladach::Vikladach(string first_name, string last_name, string patronimic, int* bithrday_date[3], string adress)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->patronimic = patronimic;
	this->bithrday_date[0] = bithrday_date[0];
	this->bithrday_date[1] = bithrday_date[1];
	this->bithrday_date[2] = bithrday_date[2];
	this->adress = adress;

	

}