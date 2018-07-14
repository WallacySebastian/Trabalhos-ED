#ifndef RETA_H
#define RETA_H

#include "Ponto.h"

/* Objeto utilizado pelo próprio programa,
para identificar uma reta em um plano cartesiano,
e é feito com 2 objetos "ponto". */
typedef void* Reta;

/* Função que cria uma reta, utilizando os pontos p1 e p2. */
Reta criarReta(Ponto p1, Ponto p2);
/* Função que retorna o ponto p1 da reta r */
Ponto getP1(Reta r);
/* Função que retorna o ponto p2 da reta r */
Ponto getP2(Reta r);
/* Função que retorna o tamanho da reta r */
double tamanhoReta(Reta r);
/* Função que libera o espaço de memória ocupada por uma reta r criada. */
void liberarReta(Reta r);

#endif
