#include <stdlib.h>
#include "../Geometria/Ponto.h"
#include "../Geometria/Calculos.h"
#include "Calculos.h"

double distanciaObjetos(Objeto obj1, Objeto obj2) {
	double d = 0;

	d = distancia(getPosicao(obj1), getPosicao(obj2));

	return d;
}

