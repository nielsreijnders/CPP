/*
	 Opdracht:       C++ Toets P7
	 Auteur:         Gijs van Lokven
	 Aanmaakdatum:   04-04-2019
	 Bestandsnaam:   Beoordeling.h
*/

class Beoordeling {
	// Delaratie
private:
	// geen van deze variabelen moeten buiten deze classe gebruikt worden dus alles private
	int bsnD201;
	std::string autoNaamD202;
	// volgens diagram geen hoofd of deel verzameling dus is uit de naam weggelaten
	int jaar;
	std::string beoordeling;
public:

	// Prototype
	Beoordeling();
	void Invoeren(Persoon persoon1, Testauto testauto1);
	void Weergeven();
};

// Constructor
Beoordeling::Beoordeling() {
	bsnD201 = 999;
	autoNaamD202 = "leeg";
	jaar = 999;
	beoordeling = "leeg";

}

// Implementatie
void Beoordeling::Invoeren(Persoon persoon1, Testauto testauto1) {
	//data uit meegegeven parameters halen
	bsnD201 = persoon1.bsnH201;
	autoNaamD202 = testauto1.autoNaamMerkTypeH202[0];

	// UI voor invoeren van gegevens
	std::cout << "Voer het huidige jaar in: ";
	std::cin >> jaar;
	std::cin.ignore();
	std::cout << "Voor uw beoordeling van de auto in: ";
	std::getline(std::cin, beoordeling);
}

void Beoordeling::Weergeven() {
	// UI, de ingevoerde gegevens weergeven
	std::cout << "Persoon " << bsnD201 << " beoordeeld testauto " << autoNaamD202 << " in het jaar " << jaar << " met de beoordeling " << beoordeling << "\n\n";
}