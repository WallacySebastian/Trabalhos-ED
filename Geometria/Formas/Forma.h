#ifndef FORMA_H
#define FORMA_H

#include "Circulo.h"
#include "Retangulo.h"

typedef void* Forma;
typedef void (*LiberarForma)(void *);

void liberarForma(Forma forma, LiberarForma lf);

#endif
