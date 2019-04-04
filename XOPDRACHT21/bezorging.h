#pragma once

class Bezorging
{
public:

	string bestelCodeD204;

	// Constructor
	Bezorging();

	// Methode
	void Invoeren(Bestelling bestelling1);
	void Weergeven();

private:

	string postCode;
	string huisNummer;
	string bezorgDag;
	string bezorgTijd;
	int actieCode;
};

Bezorging::Bezorging()
{

}

// Methode
void Bezorging::Invoeren(Bestelling bestelling1) 
{
	cout << "Waar wil je et bezorgd hebben? \n";
	cout << "Voer je postcode in: ";
	cin >> postCode;
	cout << "Voer je huisnummer in: ";
	cin >> huisNummer;
	cout << "Welke dag: ";
	cin >> bezorgDag;
	cout << "Bezorgtijd: ";
	cin >> bezorgTijd;
	cout << "Actiecode: ";
	cin >> actieCode;

	// Toekenning
	bestelCodeD204 = bestelling1.bestelCodeH204;
}

void Bezorging::Weergeven() 
{

	// UI
	cout << "\nJe bestelling met bestelcode " << bestelCodeD204 << " wordt op: \n"
		<< bezorgDag << ", " << bezorgTijd << endl
		<< "bezorgt op het adres:\n"
		<< "Postcode " << postCode << " huisnummer " << huisNummer << endl << endl
		<< "Je hebt de volgende actiecode gebruikt: " << actieCode << endl;

}