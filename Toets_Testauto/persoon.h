/************************** Module Header *******************************\
Opdracht:       Toets_Testauto
Auteur:         Niels Reijnders
Aanmaakdatum:   04-04-2019    8:39
Bestandsnaam:   persoon.h
Versie:         0.1

\************************************************************************/

#pragma once

class Persoon
{
public:

	// Constructor
	Persoon();

	int bsnNummerH201; 

	void Invoeren();

private:

};

// Constructor
Persoon::Persoon()
{
}

void Persoon::Invoeren() {
	cout << "Voer je BSN in: ";
	cin >> bsnNummerH201;
}