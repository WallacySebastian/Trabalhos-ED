#include <stdlib.h>
#include "Ponto.h"

struct estrutura_ponto {
	double x;
	double y;
};

typedef struct estrutura_ponto ponto;

Ponto criarPonto(double x, double y) {
	ponto *p0 = NULL;

	p0 = (ponto *) calloc(1, sizeof(ponto));

	p0->x = x;
	p0->y = y;

	return (Ponto) p0;
}

double getX(Ponto p) {
	ponto *p0 = NULL;

	p0 = (ponto *) p;

	return p0->x;
}

double getY(Ponto p) {
	ponto *p0 = NULL;

	p0 = (ponto *) p;

	return p0->y;
}

void liberarPonto(Ponto p) {
	ponto *p0 = NULL;

	p0 = (ponto *) p;

	free(p0);
}
