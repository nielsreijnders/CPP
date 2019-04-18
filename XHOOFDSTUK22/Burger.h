#pragma once

class Burger
{
public:

	int bsnH201;

	// Constructor
	Burger();

	void Invoeren();

private:

};

//---------------------------------------------------------------------------------------------------------------------------------

// Constructor
Burger::Burger()
{
	//NIET LEEG
	bsnH201 = 9999999;
}


// Methode
void Burger::Invoeren() {

	cout << "Voer uw BSN-nummer in: "; cin >> bsnH201;

}