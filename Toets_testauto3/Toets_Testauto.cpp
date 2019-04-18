// Toets_Testauto.cpp : This file contains the 'main' function. Program execution begins and ends there.
/************************** Module Header *****************************\
 Project:		Toets periode 7
 Auteur:		Maud Saris
 Datum:			04/04/19
 Bestandsnaam:	Toets_Testauto.cpp
\**********************************************************************/


#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
// Toevoegen van alle H-files
#include "Persoon.h"
#include "Testauto.h"
#include "Beoordeling.h"

int main()
{
	// CONSTRUCTOR
	Testauto testauto1;
	Beoordeling beoordeling1;
	//UI
	cout << "Welkom bij het testen van de auto, vul hier de gegevens in: ";
	cout << endl;
	// FUNCTIEAANROEP
	testauto1.Invoeren();
	testauto1.Weergeven();

	beoordeling1.Invoeren(testauto1);
	beoordeling1.Weergeven();
	
	system("pause");
}
