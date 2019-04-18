#pragma once
/************************** Module Header *****************************\
 Project:		Toets periode 7
 Auteur:		Maud Saris
 Datum:			04/04/19
 Bestandsnaam:	Testauto.h
\**********************************************************************/

// DECLARATIE
class Testauto
{
private:
	// leeg
public:
	string autoNaamMerkTypeH202[3]; // [0] = autoNaam [1] = autoMerk [2] = autoType
	void Invoeren();
	void Weergeven();
	// PROTOTYPEN
	//CONSTRUCTOR
		Testauto();
};

//-----------------------------------------------------------------------------------------------------------------------------------

// IMPLEMENTATIE
Testauto::Testauto() // implementatie van de constructor
{
	// niet leeg implementatie
	autoNaamMerkTypeH202[0] = "onbekend";
	autoNaamMerkTypeH202[1] = "onbekend";
	autoNaamMerkTypeH202[2] = "onbekend";
}

// METHODS
void Testauto::Invoeren()
{
	// UI
	cout << "Geef de autonaam op: "; getline(cin, autoNaamMerkTypeH202[0]); // Hier werkt getline wel, maar bij beoordeling niet?
	cout << "Geef het automerk op: "; cin >> autoNaamMerkTypeH202[1];
	cout << "Geef het autotype op: "; cin >> autoNaamMerkTypeH202[2];
	cout << endl;
}

void Testauto::Weergeven()
{
	// UI
	cout << "Testauto " << autoNaamMerkTypeH202[0] << " van het autotype " << autoNaamMerkTypeH202[2] 
		 << " is van het automerk " << autoNaamMerkTypeH202[1] << ".\n";
}