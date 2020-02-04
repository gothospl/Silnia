#include "pch.h"
#include "Kalkulator.h"

void Kalkulator::liczSilnia(int x)
{
	liczba = x;

	if (liczba < 0) {
		liczba = abs(liczba);
		cout << "Zamieniamy liczbe ujemna na dodatnia ( liczba do obliczenia silni musi byc naturalna )" << endl;
	}

	for (int i = 1; i <= liczba; i++) {
		silnia *= i;
	}

	k = silnia;

	while (k > 0) {
		przechowalnia.push_back(k % 10);
		k = k / 10;
	}

	cout << "Liczba: " << x << endl;
	cout << "Silnia: " << silnia << endl;
	cout << "Ilosc cyfr: " << przechowalnia.size() << endl;
	cout << "Cyfry w kolejnosci:";
	for (int j = przechowalnia.size() - 1; j >= 0; j--) {
		cout << " " << przechowalnia[j];
	}
}

Kalkulator::Kalkulator()
{
}


Kalkulator::~Kalkulator()
{
}
