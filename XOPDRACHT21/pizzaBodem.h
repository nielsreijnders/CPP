#pragma once

// Declaratie
class PizzaBodem
{
public:
	string pizzaBodemTypeH203;

	// Constructor
	PizzaBodem();

	// Methoden
	void Invoeren();
};

// Constructor
PizzaBodem::PizzaBodem()
{
};

// Methoden
void PizzaBodem::Invoeren()
{
	// Implementatie
	cout << "Voer de bodem van de pizza in: \n";
	cin >> pizzaBodemTypeH203;
};