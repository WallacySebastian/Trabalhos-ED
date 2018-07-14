#include <stdlib.h>
#include "Forma.h"

Ponto getCentro(Forma forma, GetCentro gc) {
	return gc(forma);
}

void liberarForma(Forma forma, LiberarForma lf) {
	lf(forma);
}
