#include "Stark.hpp"
#include "Lannister.hpp"
#include "Targaryen.hpp"
#include "PFamiliaNoble.hpp"
#include "Dragones.hpp"
#include "GuardiaReal.hpp"
#include <iostream>
#include <string>

using namespace std;

Stark stark();
Lannister lannister();
Targaryen targaryen();

int main() {
	bool pass;
	int op1, op2;
	while (pass) {
		cout << "1. Familias\n2. Simulación\n3. Salir\n:";
		cin >> op1;
		switch (op1) {
			case 1: {
				} break;
			case 2: {
				} break;
			case 3: {
				} break;
			default:
				cout << "Debe elegir entre una de las opciones indicadas." << endl;
		}
	}
}
