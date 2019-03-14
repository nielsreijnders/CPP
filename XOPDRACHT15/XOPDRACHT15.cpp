/************************** Module Header *******************************\
Opdracht:       opdracht5
Auteur:         Niels Reijnders
Aanmaakdatum:   14-03-2019    09:07
Bestandsnaam:   opdracht14.cpp
Versie:         0.1

\************************************************************************/

#include <iostream>
#include <string>

using namespace std;

#include "Deelnemer.h"
#include "Registratie.h"

int main()
{
	// Constructie
	Deelnemer deelnemer1;
	Registratie registratie1;

	// Initialisatie
	InvoerenDeelnemer(deelnemer1);
	WeergevenDeelnemer(deelnemer1);
	InvoerenRegistratie(registratie1, deelnemer1);
	WeergevenRegistratie(registratie1);
}