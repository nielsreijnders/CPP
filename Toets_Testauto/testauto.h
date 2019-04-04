/************************** Module Header *******************************\
Opdracht:       Toets_Testauto
Auteur:         Niels Reijnders
Aanmaakdatum:   04-04-2019    8:39
Bestandsnaam:   testauto.h
Versie:         0.1

\************************************************************************/

#pragma once

class Testauto
{
public:

	// Constructor
	Testauto();

	string autoNaamH202;

	void Invoeren();

private:

};

struct AutoNaamMerkType
{
	string autoNaam, autoMerk, autoType;
};

void InvoerenAutoNaamMerkType(AutoNaamMerkType[]);
void ZoekenOpAuto(AutoNaamMerkType[]);

// Constructor
Testauto::Testauto()
{
}

void Testauto::Invoeren() 
{

	// UI
	cout << "Voer de naam van de auto in:\n";
	cin >> autoNaamH202;
}


void InvoerenAutoNaamMerkType(AutoNaamMerkType autoo[3])
{
	autoo[0].autoNaam = "Auto1";
	autoo[0].autoMerk = "Merk1";
	autoo[0].autoType = "Type1";

	autoo[1].autoNaam = "Auto2";
	autoo[1].autoMerk = "Merk2";
	autoo[1].autoType = "Type2";

	autoo[2].autoNaam = "Auto3";
	autoo[2].autoMerk = "Merk3";
	autoo[2].autoType = "Type3";

	autoo[3].autoNaam = "Auto4";
	autoo[3].autoMerk = "Merk4";
	autoo[3].autoType = "Type4";
}

void ZoekenOpAuto(AutoNaamMerkType autoo[3]) {
	
	int nee = 0; 

	for (int i = 0; i < 3; i++)
	{
		if (autoo[i].autoNaam == "Auto1") {
			cout << "Bij auto" << "Auto1" << " hoort het autotype" << autoo[i].autoType << ". En is van het automerk: " << autoo[i].autoMerk << endl;
		}
		else {
			nee = nee + 1;
		}
	}
	if (nee == 3) {
		cout << "Bij de autonaam: " << "Auto1" << ", is geen auto gevonden. " << endl;
	}

}
