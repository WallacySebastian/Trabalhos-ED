#ifndef FORMA_H
#define FORMA_H

#include "Circulo.h"
#include "Retangulo.h"
#include "../Ponto.h"

typedef void* Forma;
typedef Ponto (*GetCentro)(void *);
typedef void (*LiberarForma)(void *);

Ponto getCentro(Forma forma, GetCentro gc);
void liberarForma(Forma forma, LiberarForma lf);

#endif
