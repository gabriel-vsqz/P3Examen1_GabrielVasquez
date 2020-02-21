#include "PFamiliaNoble.hpp"
#include <string>

using namespace std;

PFamiliaNoble :: PFamiliaNoble() {}

PFamiliaNoble :: PFamiliaNoble(string n, string s, string lm, int a, int d) {
	nombre = n;
	simbolo = s;
	lema = lm;
	ataque = a;
	defensa = d;
}
