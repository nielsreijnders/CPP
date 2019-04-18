/*
	 Opdracht:       C++ Toets P7
	 Auteur:         Gijs van Lokven
	 Aanmaakdatum:   04-04-2019
	 Bestandsnaam:   ToetsP7.cpp
*/

#include <iostream>
#include <string>
#include "Persoon.h"
#include "Testauto.h"
#include "Beoordeling.h"

int main()
{
    // Class objecten aanmaken
	Persoon persoon1;
	Testauto testauto1;
	Beoordeling beoordeling1;

	// functies aanroepen
	persoon1.Invoeren();
	testauto1.Invoeren();
	testauto1.Weergeven();
	beoordeling1.Invoeren(persoon1, testauto1);
	beoordeling1.Weergeven();
	
	// aan het einde het programma pauzeren
	system("pause");
}

