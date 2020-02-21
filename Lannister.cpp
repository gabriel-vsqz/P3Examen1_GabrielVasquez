#include "Lannister.hpp"
#include "GuardiaReal.hpp"
#include <string>

using namespace std;

Lannister :: Lannister() {}

Lannister :: Lannister(string j, string a, string lm, int d, int fm, int i) {
	jefe = j;
	emblema = a;
	lema = lm;
	dinero = d;
	fuerza = fm;
	integrantes = i;
}
