#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#include "Datum.h"
#include "Leerling.h"




int main()
{
	// Constructie
	Leerling Leerling1, Leerling2;
	datum datum;

	// Initialisatie
	invoerenLeerling(Leerling1, Leerling2);
	invoerenLeerlingnummer();
	zoekenOpLeerlingnummer(Leerling1, Leerling2);
}