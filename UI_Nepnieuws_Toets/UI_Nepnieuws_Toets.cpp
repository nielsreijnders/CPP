/************************** Module Header *******************************\
Opdracht:       Herkansing toets P7
Auteur:         Niels Reijnders
Aanmaakdatum:   17-04-2019    15:30
Bestandsnaam:   UI_Nepnieuws_Toets.cpp
Versie:         0.1

\************************************************************************/

// Alles include
#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#include "Mediabron.h"
#include "Nepjournalist.h"
#include "Nepnieuws.h"


int main()
{
	// Class objecten aanmaken
	Nepjournalist nepjournalist1;
	Nepnieuws nepnieuws1;
	Mediabron mediabron1;

	// Functies aanroepen
	mediabron1.Invoeren();
	nepjournalist1.Invoeren();
	nepjournalist1.Weergeven();
	nepnieuws1.Invoeren(nepjournalist1, mediabron1);
	nepnieuws1.Weergeven();

	// Aan het einde het programma pauzeren
	system("pause");
}