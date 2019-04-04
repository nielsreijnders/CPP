/************************** Module Header *******************************\
Opdracht:       Toets_Testauto
Auteur:         Niels Reijnders
Aanmaakdatum:   04-04-2019    8:39
Bestandsnaam:   Toets_Testauto.cpp
Versie:         0.1

\************************************************************************/

#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#include "testauto.h"
#include "beoordeling.h"

int main()
{
	// Constructie
	Testauto testauto1;
	AutoNaamMerkType autoo[3];
	Beoordeling beoordeling1;

	testauto1.Invoeren();
	ZoekenOpAuto(autoo);
	beoordeling1.Invoeren();
	beoordeling1.Weergeven();
}