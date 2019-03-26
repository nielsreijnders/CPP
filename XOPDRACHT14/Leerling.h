struct Leerling
{
	//initialisatie
	string naam;
	int nummerMobiel[2];

	//overerving (Constructie)
	datum geboorteDatum;
};

int leerlingnummer;

//prototype
void invoerenLeerling(Leerling & Leerling1, Leerling & Leerling2);
void invoerenLeerlingnummer();
void zoekenOpLeerlingnummer(Leerling Leerling1, Leerling Leerling2);

void invoerenLeerling(Leerling & Leerling1, Leerling & Leerling2)
{
	//leerling1
	Leerling1.naam = "Piet";
	Leerling1.nummerMobiel[0] = 1;
	Leerling1.nummerMobiel[1] = 123;
	Leerling1.geboorteDatum.dagMaandJaar[0] = 21;
	Leerling1.geboorteDatum.dagMaandJaar[1] = 06;
	Leerling1.geboorteDatum.dagMaandJaar[2] = 1981;

	//leerling2
	Leerling2.naam = "Mien";
	Leerling2.nummerMobiel[0] = 2;
	Leerling2.nummerMobiel[1] = 234;
	Leerling2.geboorteDatum.dagMaandJaar[0] = 01;
	Leerling2.geboorteDatum.dagMaandJaar[1] = 01;
	Leerling2.geboorteDatum.dagMaandJaar[0] = 1980;
}

void invoerenLeerlingnummer()
{
	//initialisatie
	cout << "Voer het leerlingnummer in: ";
	cin >> leerlingnummer;
}

void zoekenOpLeerlingnummer(Leerling Leerling1, Leerling Leerling2)
{
	// UI
	if (Leerling1.nummerMobiel[0] == leerlingnummer) {
		cout << "Leerlingnummer " << leerlingnummer << " hoort bij de leerlingnaam " << Leerling1.naam << endl;
	}
	else {
		if (Leerling2.nummerMobiel[0] == leerlingnummer) {
			cout << "Leerlingnummer " << leerlingnummer << " hoort bij de leerlingnaam " << Leerling2.naam << endl;
		}
		else {
			cout << "Er bestat geen leerling met het ingevoerde leerlingnummer: " << leerlingnummer;
		}
	}
}