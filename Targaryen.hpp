#ifndef TARGARYEN_HPP
#define TARGARYEN_HPP
#include "Targaryen.hpp"
#include "Dragones.hpp"
#include <string>
#include <vector>

using namespace std;

class Targaryen {
        private:
                string reina, emblema, lema;
                int barcos;
                vector<Dragones> ejercito;
        public:
                Targaryen();
		Targaryen(string r, string a, string lm, int b);
                string getReina() {
   			return reina;
                }
                void setReina(string r) {
                        reina = r;
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
                vector<Dragones> getEjercito() {
                        return ejercito;
                }
                int getBarcos() {
                        return barcos;
                }
                void setBarcos(int b) {
                        barcos = b;
                }
};
#endif
