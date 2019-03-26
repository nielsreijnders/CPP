/************************** Module Header *******************************\
Opdracht:       opdracht5
Auteur:         Niels Reijnders
Aanmaakdatum:   20-03-2019    11:22
Bestandsnaam:   XOPDRACHT18.cpp
Versie:         0.1

\************************************************************************/

#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#include "Deelnemer.h"

int main()
{
	//constructie
	Deelnemer deelnemer1;

	//functie aanroep
	deelnemer1.invoeren();
	deelnemer1.weergeven();
	system("pause");
}