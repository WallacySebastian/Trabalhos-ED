#ifndef CALCULOS_G_H
#define CALCULOS_G_H

#include "Ponto.h"
#include "Formas/Retangulo.h"
#include "Formas/Circulo.h"
#include "Formas/Forma.h"
#include "../Objetos/Objeto.h"

typedef int (*PontoInterno)(Ponto, Objeto);
typedef int (*Sobrepoe)(Objeto, Objeto);

/* Função que calcula a distância entre 2 pontos */
double distancia(Ponto p1, Ponto p2);
int pontoInternoAoCirculo(Ponto p, Objeto obj);
int pontoInternoAoRetangulo(Ponto p, Objeto obj);
int pontoInterno(Ponto p, Objeto obj, PontoInterno pi);
int sobrepoeCirculoCirculo(Objeto obj1, Objeto obj2);
int sobrepoeRetanguloRetangulo(Objeto obj1, Objeto obj2);
int sobrepoeCirculoRetangulo(Objeto obj1, Objeto obj2);
int sobrepoe(Objeto obj1, Objeto obj2, Sobrepoe s);

#endif
