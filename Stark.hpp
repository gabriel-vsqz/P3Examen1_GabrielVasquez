#ifndef STARK_HPP
#define STARK_HPP
#include "Stark.hpp"
#include "PFamiliaNoble.hpp"
#include <string>
#include <vector>

using namespace std;

class Stark {
        private:
		string jefe, emblema, lema;
		int lobos, integrantes;
		vector<PFamiliaNoble> ejercito;
        public:
		Stark();
		Stark(string j, int lb, string a, string lm, int i);
		string getJefe() {
			return jefe;
		}
		void setJefe(string j) {
			jefe = j;
		}
		int getLobos() {
			return lobos;
		}
		void setLobos(int lb) {
			lobos = lb;
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
		vector<PFamiliaNoble> getEjercito() {
			return ejercito;
		}
		int getIntegrantes() {
                        return integrantes;
                }
                void setIntegrantes(int i) {
                        integrantes = i;
                }
};
#endif
