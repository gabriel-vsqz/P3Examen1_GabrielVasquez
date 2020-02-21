#include "Stark.hpp"
#include "Lannister.hpp"
#include "Targaryen.hpp"
#include "PFamiliaNoble.hpp"
#include "Dragones.hpp"
#include "GuardiaReal.hpp"
#include <iostream>
#include <string>
#include <vector>

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
	} while (f < 1 || f > 3);
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

void CrearSoldado(int ft) {
	cout << endl;
        switch (ft) {
                case 1: {
	                   	cout << "----- Casa Stark ------" << endl;
                               	if (stark.getEjercito().size() < 10) {
			       		string nombre, simbolo, lema;
                                	int ataque, defensa;
                                	cout << "Nombre: ";
	                                cin >> nombre;
        	                        cout << "Símbolo de Escudo: ";
                	                cin >> simbolo;
                        	        cout << "Lema: ";
                                	cin >> lema;
	                                cout << "Ataque: ";
        	                        cin >> ataque;
                	                cout << "Defensa: ";
                        	        cin >> defensa;
					PFamiliaNoble nuevo(nombre, simbolo, lema, ataque, defensa);
					stark.setEjercito(nuevo);
				} else
					cout << "\nYa hay la cantidad máxima de soldados en esta casa" << endl;
                        } break;
                case 2: {
                                cout << "----- Casa Lannister ------" << endl;
				if (lannister.getEjercito().size() < 10) {
                                        string nombre;
                                        int edad, tipo, ataque, defensa;
                                        cout << "Nombre: ";
                                        cin >> nombre;
                                        cout << "Edad: ";
                                        cin >> edad;
                                        do {
						cout << "---Tipo de Soldado---\n1. Caballero\n2. Jinete\n3. Arquero\n: ";
                                        	cin >> tipo;
					} while (tipo < 1 && tipo > 3);
                                        cout << "Ataque: ";
                                        cin >> ataque;
                                        cout << "Defensa: ";
                                        cin >> defensa;
					switch (tipo) {
						case 1: {
								GuardiaReal nuevo(nombre, edad, ataque, defensa, GuardiaReal::CABALLERO);
								lannister.setEjercito(nuevo);
						        } break;
						case 2: {
								GuardiaReal nuevo(nombre, edad, ataque, defensa, GuardiaReal::JINETE);
								lannister.setEjercito(nuevo);
							} break;
						case 3: {
								GuardiaReal nuevo(nombre, edad, ataque, defensa, GuardiaReal::ARQUERO);
								lannister.setEjercito(nuevo);
							} break;
					}
                                } else
                                        cout << "\nYa hay la cantidad máxima de soldados en esta casa" << endl;

                        } break;
                case 3: {                                
                                cout << "----- Casa Targaryen ------" << endl;
                                if (targaryen.getEjercito().size() < 10) {
                                        string nombre, color;
                                        int llama, size, ataque, defensa;
                                        cout << "Nombre: ";
                                        cin >> nombre;
                                        cout << "Color: ";
                                        cin >> color;
                                        cout << "Tamaño: ";
                                        cin >> size;
					cout << "Distancia de la LLama: ";
					cin >> llama;
                                        cout << "Ataque: ";
                                        cin >> ataque;
                                        cout << "Defensa: ";
                                        cin >> defensa;
                                        Dragones nuevo(nombre, color, size, llama, ataque, defensa);
                                        targaryen.setEjercito(nuevo);
                                } else
                                        cout << "\nYa hay la cantidad máxima de soldados en esta casa" << endl;

			} break;
	}
}

void mostrarEjercito(int f) {
	cout << endl;
	switch (f) {
		case 1: {
				cout << "----- Casa Stark -----" << endl;
				for (int i = 0; i < stark.getEjercito().size(); i++) {
					cout << stark.getEjercito().at(i).toString() << endl;
				}
			} break;
		case 2: {
				cout << "----- Casa Lannister -----" << endl;
                                for (int i = 0; i < lannister.getEjercito().size(); i++) {
                                        cout << lannister.getEjercito().at(i).toString() << endl;
                                }
			} break;
		case 3: {
				cout << "----- Casa Targaryen -----" << endl;
                                for (int i = 0; i < targaryen.getEjercito().size(); i++) {
					cout << "prueba" << endl;
					cout << targaryen.getEjercito().at(i).toString() << endl;
                                }
			} break;
	}
	cout << "-----------------------------" << endl;
}

void Simulacion() {
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
									if (st == true || ln == true || tg == true) {
										int family = mostrarOpcFam();
										if ( (family == 1 && st == true) || (family == 2 && ln == true) || (family == 3 && tg == true) ) {
											CrearSoldado(family);
											cout << "\nSoldado enlistado para batalla" << endl;
										} else
											cout << "\nLa familia " << family << " no ha sido creada" << endl;
									} else
										cout << "No hay familia creadas" << endl;
								} break;
							case 3: {
									if (st == true || ln == true || tg == true) {
										int family = mostrarOpcFam();
										if ( (family == 1 && st == true) || (family == 2 && ln == true) || (family == 3 && tg == true) ) {
											mostrarEjercito(family);
										} else
											cout << "\nLa Familia no ha sido creada" << endl;
									} else
										cout << "No hay familias creadas" <<  endl;
								} break;
							case 4: {} break;
							default:
								cout << "Debe elegir una de las opciones indicadas" << endl;
						}
					} while (op != 4);
				} break;
			case 2: {
					Simulacion();
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
