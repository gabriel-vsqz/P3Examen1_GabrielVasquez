#include "Stark.hpp"
#include "Lannister.hpp"
#include "Targaryen.hpp"
#include "PFamiliaNoble.hpp"
#include "Dragones.hpp"
#include "GuardiaReal.hpp"
#include <iostream>
#include <string>

using namespace std;

Stark stark;
Lannister lannister;
Targaryen targaryen;
bool st = false, ln = false, tg = false;

int mostrarOpcFam() {
	int f;
	cout << "\n-----Elija una Familia-----";
	do {
		cout << "\n1. Stark\n2. Lannister\n3. Targaryen\n: ";
		cin >> f;
	} while(f < 1 && f > 3);
	return f;
}

void CrearFamilia(int tf) {
	cout << endl;
	switch (tf) {
		case 1: {
				st = true;
				cout << "----- Casa Stark ------" << endl;
				string jefe, emblema, lema;
				int lobos, integrantes;
				cout << "Jefe: ";
				cin >> jefe;
				cout << "Cantidad de Lobos Huargos: ";
				cin >> lobos;
				cout << "Animal Emblema: ";
				cin >> emblema;
				cout << "Lema: ";
				cin >> lema;
				cout << "Cantidad de Integrantes: ";
				cin >> integrantes;
				stark = Stark(jefe, lobos, emblema, lema, integrantes);
			} break;
		case 2: {
				ln = true;
				cout << "----- Casa Lannister ------" << endl;
                                string jefe, emblema, lema;
                                int dinero, fuerza, integrantes;
                                cout << "Jefe: ";
                                cin >> jefe;
                                cout << "Animal Emblema: ";
                                cin >> emblema;
                                cout << "Lema: ";
                                cin >> lema;
				cout << "Dinero: ";
				cin >> dinero;
				cout << "Fuerza de la Montaña: ";
				cin >> fuerza;
                                cout << "Cantidad de Integrantes: ";
                                cin >> integrantes;
                                lannister = Lannister(jefe, emblema, lema, dinero, fuerza, integrantes);
			} break;
		case 3: {
				tg = true;
				cout << "----- Casa Targaryen ------" << endl;
                                string reina, emblema, lema;
                                int barcos;
                                cout << "Reina: ";
                                cin >> reina;
                                cout << "Animal Emblema: ";
                                cin >> emblema;
                                cout << "Lema: ";
                                cin >> lema;
                                cout << "Cantidad de Barcos: ";
                                cin >> barcos;
                                targaryen = Targaryen(reina, emblema, lema, barcos);
			} break;
	}
}

int main() {
	bool pass = true;
	int op1;
	while (pass) {
		cout << "\n1. Familias\n2. Simulación\n3. Salir\n: ";
		cin >> op1;
		switch (op1) {
			case 1: {
					int op;
					do {
						cout << "\n1. Crear Familia\n2. Crear Soldado\n3. Listar Ejército\n4. Volver\n: ";
						cin >> op;
						while (op < 1 && op > 4) {
							cout << "Debe elegir entre una de las opciones indicadas" << endl;
							cout << "\n1. Crear Familia\n2. Crear Soldado\n3. Listar Ejército\n4. Volver\n:";
        	                                	cin >> op;
						}
						switch (op) {
							case 1: {
									if (st == false || ln == false || tg == false) {
										int family = mostrarOpcFam();
										if ( (family == 1 && st == false) || (family == 2 && ln == false) || (family == 3 && tg == false) ) {
											CrearFamilia(family);
											cout << "\nFamilia creada exitosamente" << endl;
										} else
											cout << "\nLa familia " << family << " ya está creada" << endl;
									} else
										cout << "Todas las familias ya fueron creadas" << endl;
								} break;
							case 2: {

								} break;
							case 3: {
								} break;
							case 4: {} break;
							default:
								cout << "Debe elegir una de las opciones indicadas" << endl;
						}
					} while (op != 4);
				} break;
			case 2: {
				} break;
			case 3: {
					pass = false;
					cout << endl;
				} break;
			default:
				cout << "Debe elegir entre una de las opciones indicadas." << endl;
		}
	}
}
