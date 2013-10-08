#include <iostream>
using namespace std;

#define MINIMI 10
const int maksimi = 20;

int summa;

void Laske(int, int);

void main()
{
	int luku1 = 2;
	int luku2;
	cout<<"Sy”t„ luku: ";
	cin>>luku2;
	cout<<"Lasketaan: " <<luku1 <<" + " <<luku2 <<". ";
	Laske(luku1, luku2);
	cout<<"Summa on " <<summa <<"." <<endl;
	if (summa < MINIMI)
		cout<<"Summa on pienempi kuin "<<MINIMI <<". ";
	else if (summa < maksimi)
		cout<<"Summa on "<<MINIMI <<":n ja "<<maksimi <<":n v„liss„. ";
	else
		cout<<"Summa on suurempi kuin "<<maksimi <<". ";
}
void Laske(int eka, int toka)
{
	summa = eka + toka;
}