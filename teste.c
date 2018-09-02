#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Geometria/Ponto.h"
#include "Geometria/Formas/Forma.h"
#include "Geometria/Formas/Circulo.h"
#include "Geometria/Formas/Retangulo.h"
#include "Geometria/Calculos.h"
#include "Objetos/Objeto.h"
#include "Objetos/Calculos.h"

int main(int argc, char const *argv[]) {
	Objeto o1 = NULL, o2 = NULL;
	char *id1 = NULL, *id2 = NULL;
	char *cor1 = NULL, *cor2 = NULL;
	char *cor3 = NULL, *cor4 = NULL;
	Ponto p = NULL;

	id1 = (char *) calloc(20, sizeof(char));
	id2 = (char *) calloc(20, sizeof(char));
	cor1 = (char *) calloc(20, sizeof(char));
	cor2 = (char *) calloc(20, sizeof(char));
	cor3 = (char *) calloc(20, sizeof(char));
	cor4 = (char *) calloc(20, sizeof(char));
	p = criarPonto(10, 60.1);

	strcpy(id1, "primeiro");
	strcpy(id2, "segundo");
	strcpy(cor1, "red");
	strcpy(cor2, "blue");
	strcpy(cor3, "red");
	strcpy(cor4, "blue");

	o1 = criarObjeto(id1, (Forma) criarCirculo(10), criarPonto(10, 50), cor1, cor2);
	o2 = criarObjeto(id2, (Forma) criarRetangulo(10, 10), criarPonto(60, 50), cor3, cor4);

	printf("Distancia entre eles: %lf\n", distanciaObjetos(o1, getCentroCirculo, o2, getCentroRetangulo));
	printf("É interno? %s\n", pontoInterno(p, o1, pontoInternoAoRetangulo) ? "sim":"não");
	printf("%ld, %ld\n", sizeof(*(getForma(o1))), sizeof(*(getForma(o2))));

	liberarObjeto(o1, liberarCirculo);
	liberarObjeto(o2, liberarRetangulo);
	liberarPonto(p);

	return 0;
}
