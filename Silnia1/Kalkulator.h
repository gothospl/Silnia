#pragma once

#include <vector>
#include <iostream>

using namespace std;

class Kalkulator
{
	int liczba = 0;
	long silnia = 1;
	long k = 0;
	vector<long> przechowalnia;

public:

	void liczSilnia(int x);

	Kalkulator();
	~Kalkulator();
};

