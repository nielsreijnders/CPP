/************************** Module Header *******************************\
Opdracht:       opdracht5
Auteur:         Niels Reijnders
Aanmaakdatum:   20-03-2019    11:22
Bestandsnaam:   XOPDRACHT16.cpp
Versie:         0.1

\************************************************************************/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

#include "Datum.h"
#include "Leerling.h"

int main()
{
	// Constructor
	Leerling leerling[5];

	InvoerenLeerlingen(leerling);
	InvoerenLeerlingnummer();
	ZoekenOpLeerlingen(leerling);
};
