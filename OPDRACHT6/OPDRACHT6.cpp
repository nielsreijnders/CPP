/************************** Module Header *******************************\
Opdracht:       opdracht6
Auteur:         Niels Reijnders
Aanmaakdatum:   20-02-2019	08:53
Bestandsnaam:   opdracht6.cpp
Versie:         0.1
\************************************************************************/


#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//Declaratie
string klasNaamH201;
string klasNaamD201;
string OpleidingNaamD201;
string OpleidingNaamH201;
string leerlingNaam;
int leerlingNummer;

//Prototype
void InvoerenKlas();
void InvoerenOpleiding();
void InvoerenLeerling();
void WeergevenLeerling();

//Implementatie
void InvoerenKlas()
{
	//Initialisatie
	cout << "Voer de klasnaam in: ";
	cin >> klasNaamH201;
}

//Implementatie
void InvoerenOpleiding()
{
	//Initialisatie
	cout << "Voer de opleidings naam in: ";
	cin >> OpleidingNaamH201;
}

//Implementatie
void InvoerenLeerling()
{
	//Initialisatie
	cout << "Voer je leerlingnummer in: ";
	cin >> leerlingNummer;

	cout << "Voer je leerlingnaam in: ";
	cin >> leerlingNaam;

	//Toekenning hoofd-/deelverzameling
	klasNaamD201 = klasNaamH201;
	OpleidingNaamD201 = OpleidingNaamH201;

}

//Implementatie

void WeergevenLeerling()
{
	//UI
	cout << "\n Leerling " << leerlingNaam << " met leerlingnummer " << leerlingNummer
		<< " \n staat ingeschreven bij de opleiding " << OpleidingNaamD201 << endl;

	system("pause");

	cout << "Leerlingnummer " << leerlingNummer << " zit in klas " << klasNaamD201 << endl;
}

//UI
int main()
{
	//functieaanroep!!!
	InvoerenKlas();
	InvoerenOpleiding();
	InvoerenLeerling();
	WeergevenLeerling();

	// UI

	system("pause");
}