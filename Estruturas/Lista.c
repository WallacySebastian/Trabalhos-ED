#include <stdlib.h>
#include "Lista.h"

struct estrutura_elemento {
	struct estrutura_elemento *proximo;
	struct estrutura_elemento *anterior;
};

struct estrutura_lista {
	int tamanho;
	struct estrutura_elemento *primeiro;
	struct estrutura_elemento *ultimo;
};

typedef struct estrutura_elemento elemento;
typedef struct estrutura_lista lista;

Lista criarLista() {
	lista l0 = NULL;

	l0 = (lista *) calloc(1, sizeof(lista));

	l0->tamanho = 0;
	l0->primeiro = NULL;
	l0->ultimo = NULL;

	return (Lista) l0;
}

int tamanhoLista(Lista l) {
}

Posic inserirLista(Lista l, Objeto obj);
Posic removerLista(Lista l, Posic p);
Objeto getLista(Lista l, Posic p);
Posic inserirAntesLista(Lista l, Objeto obj);
Posic inserirDepoisLista(Lista l, Objeto obj);
Posic getPrimeiroLista(Lista l);
Posic getUltimoLista(Lista l);
Posic getProximo(Lista l, Posic p);
Posic getAnterior(Lista l, Posic p);
