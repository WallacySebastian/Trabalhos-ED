#ifndef LISTA_H
#define LISTA_H

#include "Objeto.h"

typedef void* Lista;
typedef void* Posic;

Lista criarLista();
int tamanhoLista(Lista l);
Posic inserirLista(Lista l, Objeto obj);
Posic removerLista(Lista l, Posic p);
Objeto getLista(Lista l, Posic p);
Posic inserirAntesLista(Lista l, Objeto obj);
Posic inserirDepoisLista(Lista l, Objeto obj);
Posic getPrimeiroLista(Lista l);
Posic getUltimoLista(Lista l);
Posic getProximo(Lista l, Posic p);
Posic getAnterior(Lista l, Posic p);

#endif
