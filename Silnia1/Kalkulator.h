#pragma once

#include <vector>
#include <iostream>

using namespace std;

class Kalkulator
{
	int liczba = 0;
	long s = 1;
	long wewSilnia = 1;
	long k = 0;
	vector<long> przechowalnia;

public:

	void liczSilnia(int x);
	long silnia(int x);

	// Kalkulator();
	// ~Kalkulator();
};

