// L21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, p, l, x, f = 0, kib = 0, sum = 0;
	//f kiek failu (atsakymas)
	//kib kiek isnaudota kib
	//sum kiek reikia kib naujam failui
	//x temp
	cin >> n >> p >> l;
	vector<int> V;

	for (int i = 0; i < n; i++) {
		cin >> x;
		V.push_back(x); //failu masyvas
	}

	sort(V.begin(), V.end()); //surusiuoti failai nuo maziausio iki didziausio

	x = l / p;
	kib = x * p; //gaunamas sveikas skaicius galimu daliu, mums nereikalinga 0.5 dalis
	
	while (true) {
		if (sum > kib) { //kol kib nevirsytas, idk galima be if else, bet nenoriu aiskintis dabar
			break;
		}
		else {
			sum = sum + V[f]; //siuntimui naudoja maziausia kieki kib
			if (sum <= kib) f++; //jei uztenka kib, tai atsiuncia faila
		}
	}

	cout << f;

	return 0;
}