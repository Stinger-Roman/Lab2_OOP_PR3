#include "Student.h"

void Student::specialnist_set(Specialnist* spec)
{
	specialnist = spec;
}

Student::Student(string first_name, string last_name, string patronimic, int *bithrday_date[3], string adress)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->patronimic = patronimic;
	this->bithrday_date[0] = bithrday_date[0];
	this->bithrday_date[1] = bithrday_date[1];
	this->bithrday_date[2] = bithrday_date[2];
	this->adress = adress;

	zalikovka = new Zalikovka();
	
}