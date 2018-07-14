#ifndef OBJETO_H
#define OBJETO_H

#include "../Geometria/Ponto.h"
#include "../Geometria/Formas/Forma.h"

/* O tipo Objeto é um tipo generalizado, que pode possuir uma forma, cores de preenchimento e borda, um ID
para identificação e traz um ponto para apontar a posição deste em um plano 2D */
typedef void* Objeto;

/* Esta função retorna um objeto, com forma, cores, posição e identificação já definidos */
Objeto criarObjeto(char *id, Forma forma, Ponto posicao, char *cor1, char *cor2);
/* Esta função retorna o ID de um objeto */
char *getId(Objeto obj);
/* Esta função retorna a forma de um objeto */
Forma getForma(Objeto obj);
/* Esta função retorna a posição do objeto no plano 2D */
Ponto getPosicao(Objeto obj);
/* Esta função retorna o ponto que indica o centro do objeto */
Ponto getPosicaoCentro(Objeto obj, GetCentro gc);
/* Esta função retorna a cor de preenchimento do objeto */
char *getCor1(Objeto obj);
/* Esta função retorna a cor de borda do objeto */
char *getCor2(Objeto obj);
/* Esta função libera a memória alocada do objeto */
void liberarObjeto(Objeto obj, LiberarForma lf);

#endif
