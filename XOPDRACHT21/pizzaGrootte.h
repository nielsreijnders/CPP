// Declaratie
class PizzaGrootte
{

public:
	string pizzaGrootteTypeH202;

	// Constructor
	PizzaGrootte();

	// Methoden
	void Invoeren();
};

PizzaGrootte::PizzaGrootte()
{

}

void PizzaGrootte::Invoeren()
{
	cout << "Voer de grootte van de pizza in: ";
	cin >> pizzaGrootteTypeH202;
}
