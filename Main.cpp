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
					} while (tipo < 1 || tipo > 3);
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

bool validar(int v) {
	if (v == 1 && st == true) {
		return true;
	} else if (v == 2 && ln == true) {
		return true;
	} else if (v == 3 && tg == true) {
		return true;
	} else {
		return false;
	}
}

void Simulacion() {
	bool any = true;
	int fx1, fx2;
	if ( stark.getEjercito().empty() || lannister.getEjercito().empty() || targaryen.getEjercito().empty() ) {
		any = false;
	}
	if ( (st == true && ln == true) || (st == true && tg == true) || (ln == true && tg == true) && any == true) {
		cout << "\n----- Batalla por el Trono de Hierro -----" << endl;
		cout << "\n1. Stark\n2. Lannister\n3. Targaryen\n";
		do {
			cout << "Escoja Familia 1: ";
			cin >> fx1;
		} while(fx1 < 1 || fx1 > 3 || validar(fx1) == false);
		do {
			cout << "Escoja Familia 2: ";
                        cin >> fx2;
		} while(fx2 < 1 || fx2 > 3 || fx2 == fx1 || validar(fx2) == false);
	}
	int tattack1 = 0, tattack2 = 0;
	int tdefense1 = 0, tdefense2 = 0;
	string h1, h2;
	if (fx1 == 1) {
		for (int i = 0; i < stark.getEjercito().size(); i++) {
			tattack1 += stark.getEjercito().at(i).ataque;
			tdefense1 += stark.getEjercito().at(i).defensa;
		}
		h1 = "---House Stark--";
	} else if (fx1 == 2) {
		for (int i = 0; i < lannister.getEjercito().size(); i++) {
                        tattack1 += lannister.getEjercito().at(i).ataque;
                        tdefense1 += lannister.getEjercito().at(i).defensa;
                }
		h1 = "---House Lannister---";
	} else if (fx1 == 3) {
		for (int i = 0; i < targaryen.getEjercito().size(); i++) {
                        tattack1 += targaryen.getEjercito().at(i).ataque;
                        tdefense1 += targaryen.getEjercito().at(i).defensa;
                }
		h1 = "---House Targaryen---";
	}
	if (fx2 == 1) {
                for (int i = 0; i < stark.getEjercito().size(); i++) {
                        tattack2 += stark.getEjercito().at(i).ataque;
                        tdefense2 += stark.getEjercito().at(i).defensa;
                }
		h2 = "---House Stark---";
        } else if (fx2 == 2) {
                for (int i = 0; i < lannister.getEjercito().size(); i++) {
                        tattack2 += lannister.getEjercito().at(i).ataque;
                        tdefense2 += lannister.getEjercito().at(i).defensa;
                }
		h2 = "---House Lannister---";
        } else if (fx2 == 3) {
                for (int i = 0; i < targaryen.getEjercito().size(); i++) {
                        tattack2 += targaryen.getEjercito().at(i).ataque;
                        tdefense2 += targaryen.getEjercito().at(i).defensa;
                }
		h2 = "---House Targaryen---";
        }
	while (tdefense1 <= 0 || tdefense2 <= 0) {
		cout << h1 << ":\nAtaque: " << tattack1 << "\nDefensa: " << tdefense1 << endl;
		cout << h2 << ":\nAtaque: " << tattack2 << "\nDefensa: " << (tdefense2-tattack1) << endl;
	}
	if (tdefense1 <= 0) {
		cout << "El trono de hierro le pertenece a: " << h2 << endl;
	} else if (tdefense2 <= 0) {
		cout << "El trono de hierro le pertenece a: " << h1 << endl;
	} else {
		cout << "La batalla no tuvo un buen fin" << endl;
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
									if (st == true || ln == true || tg == true) {
										int family = mostrarOpcFam();
										if ( (family == 1 && st == true) || (family == 2 && ln == true) || (family == 3 && tg == true) ) {
											CrearSoldado(family);
											cout << "\nSoldado enlistado para batalla" << endl;
										} else
											cout << "\nLa familia " << family << " no ha sido creada" << endl;
									} else
										cout << "No hay familias creadas" << endl;
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
