#ifndef CIRCULO_H
#define CIRCULO_H

#include "../Ponto.h"

typedef void* Circulo;

Circulo criarCirculo(double raio);
double getRaio(Circulo c);
Ponto getCentroCirculo(Circulo c);
void liberarCirculo(Circulo c);

#endif
