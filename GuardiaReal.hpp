#ifndef GUARDIAREAL_HPP
#define GUARDIAREAL_HPP
#include "GuardiaReal.hpp"
#include <string>

using namespace std;

class GuardiaReal {
        private:
                string nombre;
		int edad, ataque, defensa, tipo;
        public:
		GuardiaReal();
		GuardiaReal(string n, int e, int a, int d, int t);
		static const int CABALLERO = 1;
		static const int JINETE = 2;
		static const int ARQUERO = 3;
		string getNombre() {
			return nombre;
		}
		void setNombre(string n) {
			nombre = n;
		}
		int getEdad() {
			return edad;
		}
		void setEdad(int e) {
			edad = e;
		}
		string toString() {
			string type;
			switch(tipo) {
				case 1:
					type = "Caballero";
					break;
				case 2:
					type = "Jinete";
					break;
				case 3:
					type = "Arquero";
					break;
			}
			string impresion = "Nombre: " + nombre + "\nEdad: " + to_string(edad) + "\nTipo: " + type + "\nAtaque: " + to_string(ataque) + "\nDefensa: " + to_string(defensa); 
                        return impresion;
                }
		friend void Simulacion();
};
#endif

