/************************** Module Header *******************************\
Opdracht:       opdracht5
Auteur:         Niels Reijnders
Aanmaakdatum:   14-03-2019    09:07
Bestandsnaam:   opdracht15.cpp
Versie:         0.1

\************************************************************************/

int registratie[6];

string naam;
string vaknaam;

using namespace std;

//Implementatie
void invoerenRegistratie()
{
	cout << "Voer je leerlingnaam in: \n";
	cin >> naam;
	cout << "Voer je leerlingnummer in: \n";
	cin >> registratie[0];
	cout << "Voer je vaknaam in: \n";
	cin >> vaknaam;
	cout << "Voer je vaknummer in: \n";
	cin >> registratie[1];
	cout << "Voer de datum in: \n";
	cin >> registratie[2];
	cout << "Voer de periode in: \n";
	cin >> registratie[3];
	cout << "Voer je lesblok in: \n";
	cin >> registratie[4];
	cout << "Voer de aanwezigheid 1 <aanwezig> of 0 <afwezig> in: \n";
	cin >> registratie[5];
}

