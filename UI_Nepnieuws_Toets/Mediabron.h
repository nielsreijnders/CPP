/************************** Module Header *******************************\
Opdracht:       Herkansing toets P7
Auteur:         Niels Reijnders
Aanmaakdatum:   17-04-2019    15:30
Bestandsnaam:   Mediabron.h
Versie:         0.1

\************************************************************************/

class Mediabron
{
// Declaratie
public:
	
	// Variable aanmaken
	string mediaNaamH201;
	
	// Prototype
	Mediabron();
	void Invoeren();

private:
	//Leeg
};

// Constructor
Mediabron::Mediabron()
{
}

// Implementatie
void Mediabron::Invoeren() 
{
	// UI, gegevens invoeren
	cout << "Voer je media naam in: ";
	cin >> mediaNaamH201;
}