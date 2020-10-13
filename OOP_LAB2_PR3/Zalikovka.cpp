#include "Zalikovka.h"

void Zalikovka::zapis_add(Vikladach* vik, Predmet* pred)
{
	int i = 0;

	if(numeration.size() != 0 )
	{ 
		i = numeration.back() + 1;
	}
	

	numeration.push_back(i);

	vicladachi.push_back(vik);

	Predmeti.push_back(pred);

	
	Bali.push_back(0);


		


}


string Zalikovka::zapis_read(int number)
{
	int i = 0;

	string out = "";

	for (Vikladach* n : vicladachi)
	{
		if (i == number)
		{ 
			out = out + n->Get_last_Name() + " " + n->Get_first_Name() + " " + n->Get_patronimic();
		}

		i++;
	}

	i = 0;

	for (Predmet* n : Predmeti)
	{
		if (i == number)
		{
			out = out + "	" +  n->GetName();
		}

		i++;
	}

	i = 0;

	for (int n : Bali)
	{
		if (i == number)
		{
			std::ostringstream ost;
			ost << n;
			out = out + "	" + ost.str();
		}

		i++;
	}

	return out;
		
}


Zalikovka::Zalikovka()
{

}