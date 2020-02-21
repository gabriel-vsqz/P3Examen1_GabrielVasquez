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
	bool pass = true;
	int op1;
	while (pass) {
		cout << "1. Familias\n2. Simulación\n3. Salir\n:";
		cin >> op1;
		switch (op1) {
			case 1: {
					int op;
					cout << "\n1. Crear Familia\n2. Crear Soldado\n3. Listar Ejército\n4. Volver\n:";
					cin >> op;
					while (op < 1 && op > 4) {
						cout << "Debe elegir entre una de las opciones indicadas" << endl;
						cout << "\n1. Crear Familia\n2. Crear Soldado\n3. Listar Ejército\n4. Volver\n:";
                                        	cin >> op;
					}
					switch (op) {
					}
				} break;
			case 2: {
				} break;
			case 3: {
					pass = false;
				} break;
			default:
				cout << "Debe elegir entre una de las opciones indicadas." << endl;
		}
	}
}
