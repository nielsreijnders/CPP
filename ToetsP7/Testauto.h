/*
	 Opdracht:       C++ Toets P7
	 Auteur:         Gijs van Lokven
	 Aanmaakdatum:   04-04-2019
	 Bestandsnaam:   Testauto.h
*/

class Testauto {
	// Delaratie
private:

public:
	std::string autoNaamMerkTypeH202[3];

	// Prototype
	Testauto();
	void Invoeren();
	void Weergeven();
};

// Constructor
Testauto::Testauto() {
	autoNaamMerkTypeH202[0] = "leeg";
	autoNaamMerkTypeH202[1] = "leeg";
	autoNaamMerkTypeH202[2] = "leeg";
}

// Implementatie
void Testauto::Invoeren() {
	
	// UI en variabelen vullen
	std::cout << "Voer de naam van de auto in: ";
	std::getline(std::cin, autoNaamMerkTypeH202[0]);
	std::cout << "Voer het merk van de auto in: ";
	std::getline(std::cin, autoNaamMerkTypeH202[1]);
	std::cout << "Voer het type van de auto in: ";
	std::getline(std::cin, autoNaamMerkTypeH202[2]);
}

void Testauto::Weergeven() {
	// UI, ingevoerde gegevens weergeven
	std::cout << "Testauto " << autoNaamMerkTypeH202[0] << " van het autotype " << autoNaamMerkTypeH202[2] << " is van het automerk " << autoNaamMerkTypeH202[1] << "\n\n";
}