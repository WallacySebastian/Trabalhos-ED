#ifndef CIRCULO_H
#define CIRCULO_H

typedef void* Circulo;

Circulo criarCirculo(double raio);
double getRaio(Circulo c);
void liberarCirculo(Circulo c);

#endif
