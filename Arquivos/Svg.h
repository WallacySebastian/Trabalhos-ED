#ifndef SVG_H
#define SVG_H

#include "../Geometria/Ponto.h"
#include "../Geometria/Reta.h"
#include "../Geometria/Formas/Circulo.h"
#include "../Geometria/Formas/Retangulo.h"
#include "../Geometria/Formas/Forma.h"
#include "../Objetos/Objeto.h"

typedef void (*EscreverForma)(FILE *, Objeto);

void iniciarSvg(FILE *arquivo);
void escreverPonto(FILE *arquivo, Ponto p);
void escreverReta(FILE *arquivo, Reta r);
void escreverCirculo(FILE *arquivo, Objeto obj);
void escreverRetangulo(FILE *arquivo, Objeto obj);
void escreverForma(FILE *arquivo, Objeto obj, EscreverForma ef);
void terminarSvg(FILE *arquivo);

#endif
