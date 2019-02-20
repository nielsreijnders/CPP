/************************** Module Header *******************************\
Opdracht:       opdracht4
Auteur:         Niels Reijnders
Aanmaakdatum:   19-02-2019    10:05
Bestandsnaam:   opdracht3.1.cpp
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include "pch.h"
#include <iostream> 
#include <string>

using namespace std;

int main()
{
	cout << "---   ---   --- \n"
        "|a|   |b|   |c| \n"
        "---   ---   --- \n"
        " .     .     .  \n"
        "  .    .    .   \n"
        "   .   .   .    \n"
        "    .  .  .     \n"
        "      ---       \n"
        "      |d|       \n"
        "      ---       \n"
        "    .  .  .     \n"
        "   .   .   .    \n"
        "  .    .    .   \n"
        " .     .     .  \n"
        "---   ---   --- \n"
        "|e|   |f|   |g| \n"
        "---   ---   --- \n\n";

	// Declaratie
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;

	// Initialisatie
	cout << "Voer het cijfer voor letter A in:";
	cin >> a;
	cout << "Voer het cijfer voor letter B in:";
	cin >> b;
	cout << "Voer het cijfer voor letter C in:";
	cin >> c;
	cout << "Voer het cijfer voor letter D in:";
	cin >> d;
	cout << "Voer het cijfer voor letter E in:";
	cin >> e;
	cout << "Voer het cijfer voor letter F in:";
	cin >> f;
	cout << "Voer het cijfer voor letter G in:";
	cin >> g;
	cout << "";
	system("pause");


	//Toekenning
	cout << "---   ---   --- \n"
		"|"<< a << "|   |"<< b <<"|   |"<< c <<"| \n"
		"---   ---   --- \n"
		" .     .     .  \n"
		"  .    .    .   \n"
		"   .   .   .    \n"
		"    .  .  .     \n"
		"      ---       \n"
		"      |"<< d <<"|       \n"
		"      ---       \n"
		"    .  .  .     \n"
		"   .   .   .    \n"
		"  .    .    .   \n"
		" .     .     .  \n"
		"---   ---   --- \n"
		"|"<< e <<"|   |"<< f <<"|   |"<< g <<"| \n"
		"---   ---   --- \n\n";

	//Som / toekenning
	float adg = a + d + g;
	float bdf = b + d + f;
	float cde = c + d + e;

	//Uitvoering
	cout << "De som van de lijn adg is " << adg << endl;
	cout << "De som van de lijn bdf is " << bdf << endl;
	cout << "De som van de lijn cde is " << cde << endl << endl;
	cout << "";
	system("pause");
}
