#ifndef LANNISTER_HPP
#define LANNISTER_HPP
#include "Lannister.hpp"
#include "GuardiaReal.hpp"
#include <string>
#include <vector>

using namespace std;

class Lannister {
        private:
                string jefe, emblema, lema;
  		int dinero, integrantes, fuerza;
                vector<GuardiaReal> ejercito;
        public:
                Lannister();
                Lannister(string j, string a, string lm, int d, int fm, int i);
                string getJefe() {
                        return jefe;
                }
                void setJefe(string j) {
                        jefe = j;
                }
                string getEmblema() {
                        return emblema;
                }
                void setEmblema(string e) {
                        emblema = e;
                }
                string getLema() {
                        return lema;
                }
                void setLema(string lm) {
                        lema = lm;
                }
                vector<GuardiaReal> getEjercito() {
                        return ejercito;
                }
		int getDinero() {
			return dinero;
		}
		void setDinero(int d) {
			dinero = d;
		}
		int getFuerza() {
			return fuerza;
		}
		void setFuerza(int f) {
			fuerza = f;
		}
                int getIntegrantes() {
                        return integrantes;
                }
                void setIntegrantes(int i) {
                        integrantes = i;
                }
};
#endif
