#ifndef RETANGULO_H
#define RETANGULO_H

typedef void* Retangulo;

Retangulo criarRetangulo(double largura, double altura);
double getLargura(Retangulo rt);
double getAltura(Retangulo rt);
void liberarRetangulo(Retangulo rt);

#endif
