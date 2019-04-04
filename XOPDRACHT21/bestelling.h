#include "pizzaNaam.h"
#include "pizzaBodem.h"
#include "pizzaGrootte.h"

class Bestelling
{
public:

	string bestelCodeH204;

	// Constructor
	Bestelling();

	// Methode
	void Invoeren();
	void Weergeven();

private:
	string pizzaNaamD201;
	string pizzaGrootteTypeD202;
	string pizzaBodemTypeD203;
	int aantal;
};

// Constructor
Bestelling::Bestelling()
{
}

// Methode
void Bestelling::Invoeren()
{
	// Constructie
	PizzaNaam naam;
	PizzaGrootte grote;
	PizzaBodem bodem;

	// Toekenning
	naam.Invoeren();
	pizzaNaamD201 = naam.pizzaNaamH201;

	grote.Invoeren();
	pizzaGrootteTypeD202 = grote.pizzaGrootteTypeH202;

	bodem.Invoeren();
	pizzaBodemTypeD203 = bodem.pizzaBodemTypeH203;

	// Implentansatie
	cout << "Geef het aantal pizza's op: \n";
	cin >> aantal;

	cout << "Voer je bestelcode in: \n";
	cin >> bestelCodeH204;
}

// Methode
void Bestelling::Weergeven()
{

	// UI
	cout << "\nDe volgende bestelling hebbe we voor je geregisteerd: \n"
		<< aantal << "x Pizza " << pizzaNaamD201 << ", " << pizzaGrootteTypeD202 << " met " << pizzaBodemTypeD203 << " bodem. \n";
	cout << endl;
}