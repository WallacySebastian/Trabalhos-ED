#include <stdlib.h>
#include "../Geometria/Formas/Forma.h"
#include "../Geometria/Ponto.h"
#include "../Geometria/Calculos.h"
#include "Calculos.h"

double distanciaObjetos(Objeto obj1, GetCentro gc1, Objeto obj2, GetCentro gc2) {
	double d = 0;

	d = distancia(getPosicaoCentro(obj1, gc1), getPosicaoCentro(obj2, gc2));

	return d;
}

