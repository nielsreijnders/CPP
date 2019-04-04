/************************** Module Header *******************************\
Opdracht:       Toets_Testauto
Auteur:         Niels Reijnders
Aanmaakdatum:   04-04-2019    8:39
Bestandsnaam:   beoordeling.h
Versie:         0.1

\************************************************************************/

#pragma once

class Beoordeling
{
public:

	// Constructor
	Beoordeling();

	string autoNaamD202;
	int jaar;
	string beoordeling;

	// Methode
	void Invoeren();
	void Weergeven();

private:
	int bsnD201;
};

// Constructor
Beoordeling::Beoordeling()
{
}


// Methode
void Beoordeling::Invoeren() {
	cout << "In welk jaar heb je de testauto beoordeeld? \n";
	cin >> jaar;
	cout << "Geef de beoordeling op: \n";
	cin >> beoordeling;
}


// Methode
void Beoordeling::Weergeven() {
	cout << "De persoon met bsn " << bsnD201 << ", beoordeelt de testauto " << autoNaamD202 << ", in het jaar " << jaar << ". Hij geeft de beoordeling: \n " << endl;
	cin >> beoordeling;
}