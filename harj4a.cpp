 #include <iostream> // Ottaa ohjelmaan mukaan imput-output streamin, eli n„pp„imist”n ja n„yt”n
using namespace std; // Ohjelma k„ytt„„ C++ standardikirjastoa (nimiavaruutta)

#define MAX 10 // M„„ritteele vakion MAX arvoksi 10, vakionimet isolla ("herrasmiestapa")
// #define max1 20 M„„rittelee vakion max1 arvoksi 20, vanha tapa.
const int max1 = 20; // Sama kuin yll„, mutta uudempi ja parempi tapa. Integer = kokonaisluku

int summa; // M„„rittelee kokonaislukumuuttujan, jonka arvoa ei viel„ ole. Globaali muuttuja.

void Laske(int, int); // Esittelee aliohjelmat (ennen kuin niit„ voidaan k„ytt„„, eli taustatietoa, ei varsinaista ohjelmakoodia!)

void main() // P„„ohjelma alkaa t„st„!
{
	int luku1 = 2; // M„„rittelee kokonaisluvun nimelt„„n luku1, jonka arvo on 2. Paikallinen muuttuja.
	int luku2; // M„„rittelee muuttujan nimelt„„n luku2. Ennen k„ytt”„ on sy”tett„v„ tietoa.
	cout<<"Sy”t„ luku: "; // Tulostaa tekstin n„yt”lle.
	cin>>luku2; // Luetaan n„pp„imist”lt„ k„ytt„j„n antamaa tietoa, tieto tulee luku2:n arvoksi.
	Laske(luku1, luku2); // Kutsutaan aliohjelma Laske. L„hetet„„n luku1 ja luku2 aliohjelmalle, ks. rivi 26.
	if (summa < MAX) // Jos summa on pienempi kuin MAX, eli 10, ajetaan seuraava rivi..
		cout<<"Summa on pienempi kuin "<<MAX <<". "; // Tulostus.
	if (summa < max1) // Jos summa on pienempi kuin max1, eli 20, ajetaan seuraava rivi..
		cout<<"Summa on pienempi kuin "<<max1 <<". "; // Tulostus.
	else // Jos summa on suurempi kuin MAX ja max1, ajetaan seuraava rivi..
		cout<<"Summa on suurempi kuin "<<MAX <<" ja " <<max1 <<". " <<endl; // Tulostus.
}
void Laske(int eka, int toka)
{
	summa = eka + toka; // Summaa luvut eka ja toka yhteen. Aliohjelman suoritettua itsens„ palataan riville 18.
}