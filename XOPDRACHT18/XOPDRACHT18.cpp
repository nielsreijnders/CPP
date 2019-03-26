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