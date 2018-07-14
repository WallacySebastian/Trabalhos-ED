#ifndef RETANGULO_H
#define RETANGULO_H

#include "../Ponto.h"

typedef void* Retangulo;

Retangulo criarRetangulo(double largura, double altura);
double getLargura(Retangulo rt);
double getAltura(Retangulo rt);
Ponto getCentroRetangulo(Retangulo rt);
void liberarRetangulo(Retangulo rt);

#endif
