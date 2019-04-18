/************************** Module Header *******************************\
Opdracht:       Herkansing toets P7
Auteur:         Niels Reijnders
Aanmaakdatum:   17-04-2019    15:30
Bestandsnaam:   Nepnieuws.h
Versie:         0.1

\************************************************************************/

class Nepnieuws
// Declaratie
{
public:

	// Prototype
	Nepnieuws();
	void Invoeren(Nepjournalist nepjournalist1, Mediabron mediabron1);
	void Weergeven();

private:

	// Variable aanmaken
	// geen van deze variabelen moeten buiten deze classe gebruikt worden dus alles private
	int Datum;
	int nepJournalistNummerD202;
	int nepnieuwsDatumJournalistnummer[1];
	string nepnieuwsMedianaamOnderwerp[1];
	string mediaNaamD201;
	string onderwerp;
	
};

// Constructor
Nepnieuws::Nepnieuws()
{
}

// Implementatie
void Nepnieuws::Invoeren(Nepjournalist nepjournalist1, Mediabron mediabron1) 
{
	// UI, gegevens invoeren
	cout << "Voer de datum in: ";
	cin >> Datum;
	cout << "Voer het onderwerp in: ";
	cin >> onderwerp; //getline (cin, onderwerp); //--> Werkt niet, gaat gelijk door naar de volgende

	// Variable vullen
	// TOEKENNING
	nepJournalistNummerD202 = nepjournalist1.nepJournalistNummerH202;
	nepnieuwsDatumJournalistnummer[0] = Datum;
	nepnieuwsDatumJournalistnummer[1] = nepJournalistNummerD202;
	// TOEKENNING
	mediaNaamD201 = mediabron1.mediaNaamH201;
	nepnieuwsMedianaamOnderwerp[0] = mediaNaamD201;
	nepnieuwsMedianaamOnderwerp[1] = onderwerp;

}

void Nepnieuws::Weergeven()
{
	// UI, de ingevoerde gegevens weergeven
	cout << "\nOp de datum " << nepnieuwsDatumJournalistnummer[0] << " publiceert nepjournalist " << nepnieuwsDatumJournalistnummer[1] << " in de mediabron " << nepnieuwsMedianaamOnderwerp[0] << " nepnieuws over het onderwerp " << nepnieuwsMedianaamOnderwerp[1] << ".\n\n\n";
}