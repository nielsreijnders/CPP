/************************** Module Header *******************************\
Opdracht:       opdracht5
Auteur:         Niels Reijnders
Aanmaakdatum:   20-03-2019    11:22
Bestandsnaam:   XOPDRACHT21.cpp
Versie:         0.1

\************************************************************************/

#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#include "bestelling.h"
#include "bezorging.h"

int main()
{


	// Constructie
	// CLASS + NAAM [OBJECT] (ZELF VERZINNEN)
	Bestelling bestelling1;
	Bezorging bezorging1;
	

	// UI
	cout << "Welkom bij de bestelapp van Domino's\n"
		<< "Plaats hier je bestelling: \n\n"
		<< "Stel zelf je pizza samen\n";


	bestelling1.Invoeren();
	bestelling1.Weergeven();
	bezorging1.Invoeren(bestelling1);
	bezorging1.Weergeven();
}