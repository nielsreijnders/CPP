#pragma once

class Organisatie
{
public:
	string organisatieH204;

	// Constructor
	Organisatie();

	// Methoden
	void Invoeren();
};

// Constructor
Organisatie::Organisatie()
{
};

// Methoden
void Organisatie::Invoeren()
{
	// UI
	cout << "Voer je organisatie in: ";
	cin >> organisatieH204;
};