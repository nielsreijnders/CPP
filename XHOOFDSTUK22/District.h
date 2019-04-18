#pragma once

class District
{
public:

	// Constructor
	District();

	string districtH202;

	void Invoeren();

private:

};


// Constructor
District::District()
{
}

void District::Invoeren() {
	cout << "Voer uw district in: ";
	cin >> districtH202;
}
