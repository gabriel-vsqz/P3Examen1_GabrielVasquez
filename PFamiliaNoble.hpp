#ifndef PFAMILIANOBLE_HPP
#define PFAMILIANOBLE_HPP
#include "PFamiliaNoble.hpp"
#include <string>

using namespace std;

class PFamiliaNoble {
        private:
                string nombre, simbolo, lema;
                int ataque, defensa;
        public:
                PFamiliaNoble();
                PFamiliaNoble(string n, string s, string lm, int a, int d);
                string getNombre() {
                        return nombre;
                }
                void setNombre(string n) {
                        nombre = n;
                }
                string getSimbolo() {
			return simbolo;
		}
		void setSimbolo(string s) {
			simbolo = s;
		}
		string getLema() {
			return lema;
		}
		void setLema(string lm) {
			lema = lm;
		}
		string toString() {
			string impresion = "Nombre: " + nombre + "\nSímbolo de Escudo: " + simbolo + "\nLema: " + lema + "\nAtaque: " + to_string(ataque) + "\nDefensa: " + to_string(defensa);
			return impresion;
		}
		friend void Simulacion();
};
#endif
