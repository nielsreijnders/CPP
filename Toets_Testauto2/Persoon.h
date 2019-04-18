#pragma once
/************************** Module Header *****************************\
 Project:		Toets periode 7
 Auteur:		Maud Saris
 Datum:			04/04/19
 Bestandsnaam:	Persoon.h
\**********************************************************************/

// DECLARATIE
class Persoon
{
private:
	// leeg
public:
	// DECLARATIE
		int bsnH201;
		void Invoeren();
	// PROTOTYPEN
	//CONSTRUCTOR
		Persoon(); 
};

//-----------------------------------------------------------------------------------------------------------------------------------

// IMPLEMENTATIE
Persoon::Persoon() // implementatie van de constructor
{
	// niet leeg implementatie
	bsnH201 = 99999999;
}

// METHODS
void Persoon::Invoeren()
{
	// UI
	cout << "Voer uw BSN-nummer in: "; cin >> bsnH201;
}