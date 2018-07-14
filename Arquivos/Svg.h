#ifndef SVG_H
#define SVG_H

#include "../Geometria/Ponto.h"
#include "../Geometria/Reta.h"

void iniciarSvg(FILE *arquivo);
void escreverPonto(FILE *arquivo, Ponto p);
void escreverReta(FILE *arquivo, Reta r);
void terminarSvg(FILE *arquivo);

#endif
