#ifndef OBJETO_H
#define OBJETO_H

#include "../Geometria/Ponto.h"
#include "../Geometria/Formas/Forma.h"

typedef void* Objeto;

Objeto criarObjeto(char *id, Forma forma, Ponto posicao, char *cor1, char *cor2);
char *getId(Objeto obj);
Forma getForma(Objeto obj);
Ponto getPosicao(Objeto obj);
char *getCor1(Objeto obj);
char *getCor2(Objeto obj);
void liberarObjeto(Objeto obj, LiberarForma lf);

#endif
