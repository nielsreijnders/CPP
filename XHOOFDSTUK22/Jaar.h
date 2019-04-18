#pragma once

class Jaar
{
public:
	Jaar();

	int jaarH203;

	void Invoeren();

private:

};

Jaar::Jaar()
{
}

// Methoden
void Jaar::Invoeren()
{
	// UI
	cout << "Voer hier het jaar in: ";
	cin >> jaarH203;
};