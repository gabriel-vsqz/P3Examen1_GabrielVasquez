#ifndef DRAGONES_HPP
#define DRAGONES_HPP
#include "Dragones.hpp"
#include <string>

using namespace std;

class Dragones {
        private:
                string nombre, color;
                int size, dllama, ataque, defensa;
        public:
                Dragones();
                Dragones(string n, string c, int s, int dl, int a, int d);
                string getNombre() {
                        return nombre;
                }
                void setNombre(string n) {
                        nombre = n;
                }
		string getColor() {
			return color;
		}
		void setColor(string c) {
			color = c;
		}
                int getSize() {
                        return size;
                }
                void setSize(int s) {
                        size = s;
                }
                int getDllama() {
                        return dllama;
                }
                void setDllama(int dl) {
  			dllama = dl;
                }
		string toString() {
			string impresion = "Nombre: " + nombre + "\nColor: " + color + "\nTamaño: " + to_string(size) + "\nDistancia de la LLama: " + to_string(dllama) +  "\nAtaque: " + to_string(ataque) + "\nDefensa: " + to_string(defensa);
                        return impresion;
                }
		friend void Simulacion();
};
#endif
