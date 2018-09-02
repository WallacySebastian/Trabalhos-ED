#include <stdlib.h>
#include "Reta.h"
#include "Calculos.h"

struct geo_reta {
	Ponto p1;
	Ponto p2;
};

typedef struct geo_reta reta;

Reta criarReta(Ponto p1, Ponto p2) {
	reta *r0 = NULL;

	r0 = (reta *) calloc(1, sizeof(reta));

	r0->p1 = p1;
	r0->p2 = p2;

	return (Reta) r0;
}

Ponto getP1(Reta r) {
	reta *r0 = NULL;

	r0 = (reta *) r;

	return r0->p1;
}

Ponto getP2(Reta r) {
	reta *r0 = NULL;

	r0 = (reta *) r;

	return r0->p2;
}

double tamanhoReta(Reta r) {
	reta *r0 = NULL;
	double d = 0;

	r0 = (reta *) r;

	d = distancia(r0->p1, r0->p2);

	return d;
}

void liberarReta(Reta r) {
	reta *r0 = NULL;

	r0 = (reta *) r;

	liberarPonto(r0->p1);
	liberarPonto(r0->p2);
	free(r0);
}
