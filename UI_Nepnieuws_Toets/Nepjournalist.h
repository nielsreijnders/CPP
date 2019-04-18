/************************** Module Header *******************************\
Opdracht:       Herkansing toets P7
Auteur:         Niels Reijnders
Aanmaakdatum:   17-04-2019    15:30
Bestandsnaam:   Nepjournalist.h
Versie:         0.1

\************************************************************************/

class Nepjournalist
{
// Declaratie
public:

	// Variable aanmaken
	int nepJournalistNummerH202;

	// Prototype
	Nepjournalist();
	void Invoeren();
	void Weergeven();

private:

	// Variable aanmaken
	// geen van deze variabelen moeten buiten deze classe gebruikt worden dus alles private
	string nepJournalistNaam;
	string geslacht;
};

// Constructor
Nepjournalist::Nepjournalist()
{
}

// Implementatie
void Nepjournalist::Invoeren() {

	// UI, gegevens invoeren
	cout << "\nVoer een nep journalist naam in: ";
	cin >> nepJournalistNaam;
	cout << "Voer het nep journalist nummer in: ";
	cin >> nepJournalistNummerH202;
	cout << "Voer het geslacht in: ";
	cin >> geslacht;

}

void Nepjournalist::Weergeven() {
	// UI, de ingevoerde gegevens weergeven
	cout << "\nNepjournalist " << nepJournalistNaam << " van het geslacht " << geslacht << " staat geregistreerd onder het het nepjournalistnummer " << nepJournalistNummerH202 << ".\n\n";
}