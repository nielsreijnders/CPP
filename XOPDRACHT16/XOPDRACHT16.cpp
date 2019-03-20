// XOPDRACHT16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

#include "Datum.h"
#include "Leerling.h"

int main()
{
	Leerling leerling[5];
	Datum datum;

	InvoerenLeerlingen(leerling);
	InvoerenLeerlingnummer();
	ZoekenOpLeerlingen(leerling);
};
