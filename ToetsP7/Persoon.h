/*
	 Opdracht:       C++ Toets P7
	 Auteur:         Gijs van Lokven
	 Aanmaakdatum:   04-04-2019
	 Bestandsnaam:   Persoon.h
*/

class Persoon {
// Delaratie
private:

public:
	int bsnH201;

	// Prototype
	Persoon();
	void Invoeren();
};

// Constructor
Persoon::Persoon() {
	bsnH201 = 999;
}

// Implementatie
void Persoon::Invoeren() {
	// UI, gegevens invoeren
	std::cout << "Voer uw BSN in: ";
	std::cin >> bsnH201;
	std::cin.ignore();
}