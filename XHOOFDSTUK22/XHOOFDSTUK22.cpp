#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#include "Stemmer.h"
#include "Kandidaat.h"
#include "Jaar.h"
#include "Organisatie.h"

int main()
{
	// Constructie
	Stemmer stemmer1;
	Kandidaat kandidaat1;

	// Functieaanroep
	stemmer1.Invoeren();
	stemmer1.Weergeven();
	kandidaat1.Invoeren();
	kandidaat1.Weergeven();
}