/************************** Module Header *******************************\
Opdracht:       opdracht5
Auteur:         Niels Reijnders
Aanmaakdatum:   14-03-2019    09:07
Bestandsnaam:   opdracht14.cpp
Versie:         0.1

\************************************************************************/

// Declaratie
struct Deelnemer {
	// Declaratie
	string deelnemerNaam;
	int rugnummerChipnummer[2];
};

// Prototype
void InvoerenDeelnemer(Deelnemer&);
void WeergevenDeelnemer(Deelnemer);

// Implentatie
void InvoerenDeelnemer(Deelnemer& deelnemer) {
	// Initialisatie
	cout << "Deelnemergegevens NYCM\n"
		<< "Voer de naam in: ";
	cin >> deelnemer.deelnemerNaam;
	cout << "Voer het rugnummer in: ";
	cin >> deelnemer.rugnummerChipnummer[0];
	cout << "Voer het chipnummer in: ";
	cin >> deelnemer.rugnummerChipnummer[1];
};

void WeergevenDeelnemer(Deelnemer deelnemer) {
	// UI
	cout << "Deelnemer " << deelnemer.deelnemerNaam << " heeft het rugnummer " << deelnemer.rugnummerChipnummer[0] << " en hetchipnummer " << deelnemer.rugnummerChipnummer[1] << endl;
};