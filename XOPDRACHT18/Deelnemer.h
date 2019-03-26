/************************** Module Header *******************************\
Opdracht:       opdracht5
Auteur:         Niels Reijnders
Aanmaakdatum:   20-03-2019    11:22
Bestandsnaam:   Deelnemer.h
Versie:         0.1

\************************************************************************/

class Deelnemer
{
	private: string deelnemerNaam;

	public: int rugnummerChipnummer[2];
		//constructor
		Deelnemer()
		{
			
		}
		//methoden
		void invoeren();
		void weergeven();
};

//implemenaamtatie
void Deelnemer::invoeren()
{
	//initialisatie
	cout << "Voer je naam in: \n";
	cin >> deelnemerNaam;
	cout << "Voer je rugnummer in: \n";
	cin >> rugnummerChipnummer[0];
	cout << "Voer je chipnummer in: \n";
	cin >> rugnummerChipnummer[1];
}

void Deelnemer::weergeven()
{
	//UI
	cout << "deelnemer " << deelnemerNaam << " heeft het rugnummer " << rugnummerChipnummer[0] << " en het chipnummer " << rugnummerChipnummer[1] << endl;
}