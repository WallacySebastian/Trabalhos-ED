#include <stdlib.h>
#include "Retangulo.h"

struct estrutura_retangulo {
	double largura;
	double altura;
};

typedef struct estrutura_retangulo retangulo;

Retangulo criarRetangulo(double largura, double altura) {
	retangulo *rt0 = NULL;

	rt0 = (retangulo *) calloc(1, sizeof(retangulo));

	rt0->largura = largura;
	rt0->altura = altura;

	return (Retangulo) rt0;
}

double getLargura(Retangulo rt) {
	retangulo *rt0 = NULL;

	rt0 = (retangulo *) rt;

	return rt0->largura;
}

double getAltura(Retangulo rt) {
	retangulo *rt0 = NULL;

	rt0 = (retangulo *) rt;

	return rt0->altura;
}

void liberarRetangulo(Retangulo rt){
	retangulo *rt0 = NULL;

	rt0 = (retangulo *) rt;

	free(rt0);
}
