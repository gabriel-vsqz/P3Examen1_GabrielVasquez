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
		friend void Simulacion();
};
#endif

