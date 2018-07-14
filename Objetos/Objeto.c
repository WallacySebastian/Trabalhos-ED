#include <stdlib.h>
#include "Objeto.h"

struct estrutura_objeto {
	char *id;
	Forma forma;
	Ponto posicao;
	char *cor1;
	char *cor2;
};

typedef struct estrutura_objeto objeto;

Objeto criarObjeto(char *id, Forma forma, Ponto posicao, char *cor1, char *cor2) {
	objeto *obj0 = NULL;

	obj0 = (objeto *) calloc(1, sizeof(objeto));

	obj0->id = id;
	obj0->forma = forma;
	obj0->posicao = posicao;
	obj0->cor1 = cor1;
	obj0->cor2 = cor2;

	return (Objeto) obj0;
}

char *getId(Objeto obj) {
	objeto *obj0 = NULL;

	obj0 = (objeto *) obj;

	return obj0->id;
}

Forma getForma(Objeto obj) {
	objeto *obj0 = NULL;

	obj0 = (objeto *) obj;

	return obj0->forma;
}

Ponto getPosicao(Objeto obj) {
	objeto *obj0 = NULL;

	obj0 = (objeto *) obj;

	return obj0->posicao;
}

char *getCor1(Objeto obj) {
	objeto *obj0 = NULL;

	obj0 = (objeto *) obj;

	return obj0->cor1;
}

char *getCor2(Objeto obj) {
	objeto *obj0 = NULL;

	obj0 = (objeto *) obj;

	return obj0->cor2;
}

void liberarObjeto(Objeto obj, LiberarForma lf) {
	objeto *obj0 = NULL;

	obj0 = (objeto *) obj;

	free(obj0->id);
	liberarForma(obj0->forma, lf);
	liberarPonto(obj0->posicao);
	free(obj0->cor1);
	free(obj0->cor2);
	free(obj0);
}
