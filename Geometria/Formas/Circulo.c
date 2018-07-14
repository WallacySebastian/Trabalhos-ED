#include <stdlib.h>
#include "Circulo.h"

struct estrutura_circulo {
	double raio;
};

typedef struct estrutura_circulo circulo;

Circulo criarCirculo(double raio) {
	circulo *c0 = NULL;

	c0 = (circulo *) calloc(1, sizeof(circulo));

	c0->raio = raio;

	return (Circulo) c0;
}

double getRaio(Circulo c) {
	circulo *c0 = NULL;

	c0 = (circulo *) c;

	return c0->raio;
}

Ponto getCentroCirculo(Circulo c) {
	return criarPonto(0, 0);
}

void liberarCirculo(Circulo c) {
	circulo *c0 = NULL;

	c0 = (circulo *) c;

	free(c0);
}
