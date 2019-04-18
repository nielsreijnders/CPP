#pragma once
/************************** Module Header *****************************\
 Project:		Toets periode 7
 Auteur:		Maud Saris
 Datum:			04/04/19
 Bestandsnaam:	Beoordeling.h
\**********************************************************************/

// DECLARATIE
class Beoordeling
{
private:
	// Leeg
public:
	int bsnDl201;
	string autoNaamDl202;
	string beoordeling;
	int jaar;
	void Invoeren(Testauto);
	void Weergeven();
	// PROTOTYPEN
	//CONSTRUCTOR
		Beoordeling();
};

//-----------------------------------------------------------------------------------------------------------------------------------

// IMPLEMENTATIE
Beoordeling::Beoordeling() // implementatie van de constructor
{
	// niet leeg implementatie
	bsnDl201 = 99999;
	autoNaamDl202 = "onbekend";
	jaar = 9999;
	beoordeling = "onbekend";
}

// METHODS
void Beoordeling::Invoeren(Testauto testauto1)
{
	// Persoon.h
	Persoon persoon;
	persoon.Invoeren();
	// TOEKENNING
	bsnDl201 = persoon.bsnH201;
	// Testauto.h
	Testauto testauto;
	//testauto.Invoeren();
	// TOEKENNING
	autoNaamDl202 = testauto.autoNaamMerkTypeH202[0];

	// UI
	cout << "Wat is het testjaar van deze auto?: "; cin >> jaar;
	cout << endl;
	cout << "Wat is de beoordeling van deze testauto?: "; cin >> beoordeling; //getline (cin, beoordeling); //--> Werkt niet, gaat gelijk door naar de volgende
	cout << endl;
}

void Beoordeling::Weergeven()
{
	// UI
	cout << "Persoon " << bsnDl201 << " beoordeelt testauto " << autoNaamDl202 << " in het jaar " 
		 << jaar << " met de beoordeling " << beoordeling << ".\n";
}