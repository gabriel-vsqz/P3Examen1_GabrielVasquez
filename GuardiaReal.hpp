#ifndef GUARDIAREAL_HPP
#define GUARDIAREAL_HPP
#include "GuardiaReal.hpp"
#include <string>

using namespace std;

class GuardiaReal {
        private:
                string nombre;
		int edad, ataque, defensa;
        public:
		GuardiaReal();
		GuardiaReal(string n, int e, int a, int d);
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
		int getAtaque() {
			return ataque;
		}
		void setAtaque(int a) {
			ataque = a;
		}
		int getDefensa() {
			return defensa;
		}
		void setDefensa(int d) {
			defensa = d;
		}
};
#endif

