#ifndef PONTO_H
#define PONTO_H

/* É um objeto utilizado pelo próprio programa,
que identifica um ponto num plano cartesiano,
com coordenadas reais (x,y). */
typedef void* Ponto;

/* Função que retorna um ponto com coordenadas (x,y). */
Ponto criarPonto(double x, double y);
/* Função que retorna a coordenada x do ponto p */
double getX(Ponto p);
/* Função que retorna a coordenada y do ponto p */
double getY(Ponto p);
/* Função que libera o espaço de memória ocupada por um ponto p criado. */
void liberarPonto(Ponto p);

#endif
