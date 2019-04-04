#pragma once

class PizzaNaam
{
public:

	string pizzaNaamH201;

	// Constructor
	PizzaNaam();

	// Methoden
	void Invoeren();

private:

};

// Constructor
PizzaNaam::PizzaNaam()
{
};

void PizzaNaam::Invoeren()
{
	cout << "Voer de naam van de pizza in: ";
	cin >> pizzaNaamH201;
}