#pragma once

struct Leerling {
	string naam;
	int nummerMobiel[2];
	Datum geboorteDatum;

};

int LeerlingNummer;

// Prototype
void InvoerenLeerlingen(Leerling[]);

void InvoerenLeerlingen(Leerling leerling[5]) {

	//leerling 1
	leerling[0].naam = "Piet";
	leerling[0].nummerMobiel[0] = 1;
	leerling[0].nummerMobiel[1] = 123;
	leerling[0].geboorteDatum.dagMaandJaar[0] = 01;
	leerling[0].geboorteDatum.dagMaandJaar[1] = 01;
	leerling[0].geboorteDatum.dagMaandJaar[2] = 1980;

	//leerling 2
	leerling[1].naam = "Mien";
	leerling[1].nummerMobiel[0] = 2;
	leerling[1].nummerMobiel[1] = 234;
	leerling[1].geboorteDatum.dagMaandJaar[0] = 01;
	leerling[1].geboorteDatum.dagMaandJaar[1] = 01;
	leerling[1].geboorteDatum.dagMaandJaar[2] = 1980;

	//Leerling 3
	leerling[2].naam = "Jan";
	leerling[2].nummerMobiel[0] = 3;
	leerling[2].nummerMobiel[1] = 345;
	leerling[2].geboorteDatum.dagMaandJaar[0] = 01;
	leerling[2].geboorteDatum.dagMaandJaar[1] = 01;
	leerling[2].geboorteDatum.dagMaandJaar[2] = 1980;

	//Leerling 4
	leerling[3].naam = "Trui";
	leerling[3].nummerMobiel[0] = 4;
	leerling[3].nummerMobiel[1] = 456;
	leerling[3].geboorteDatum.dagMaandJaar[0] = 21;
	leerling[3].geboorteDatum.dagMaandJaar[1] = 06;
	leerling[3].geboorteDatum.dagMaandJaar[2] = 1981;

	//Leerling 5
	leerling[4].naam = "Klaas";
	leerling[4].nummerMobiel[0] = 5;
	leerling[4].nummerMobiel[1] = 567;
	leerling[4].geboorteDatum.dagMaandJaar[0] = 15;
	leerling[4].geboorteDatum.dagMaandJaar[1] = 03;
	leerling[4].geboorteDatum.dagMaandJaar[2] = 1969;


};