#include <stdlib.h>
#include <math.h>
#include "Calculos.h"

double distancia(Ponto p1, Ponto p2) {
	double x1 = 0, y1 = 0;
	double x2 = 0, y2 = 0;
	double d = 0;

	x1 = getX(p1);
	y1 = getY(p1);
	x2 = getX(p2);
	y2 = getY(p2);

	d = pow(x2-x1, 2) + pow(y2-y1, 2);
	d = sqrt(d);

	return d;
}

int pontoInternoAoCirculo(Ponto p, Objeto obj) {
	double d = 0;
	double raio = 0;

	d = distancia(p, getPosicao(obj));

	raio = getRaio((Circulo) getForma(obj));

	if (d <= raio)	{
		return 1;
	}
	else {
		return 0;
	}
}

int pontoInternoAoRetangulo(Ponto p, Objeto obj) {
	double d = 0;
	double largura = 0, altura = 0;
	double x = 0, y = 0;
	double xp = 0, yp = 0;

	largura = getLargura(getForma(obj));
	altura = getAltura(getForma(obj));
	x = getX(getPosicao(obj));
	y = getY(getPosicao(obj));

	xp = getX(p);
	yp = getY(p);

	if(xp >= x && xp <= x+largura && yp >= y && yp <= y+altura) {
		return 1;
	}
	else {
		return 0;
	}
}

int pontoInterno(Ponto p, Objeto obj, PontoInterno pi) {
	pi(p, obj);
}

int sobrepoeCirculoCirculo(Objeto obj1, Objeto obj2) {
	double raio1 = 0, raio2 = 0;
	double d = 0;

	d = distancia(getPosicao(obj1), getPosicao(obj2));
	raio1 = getRaio(getForma(obj1));
	raio2 = getRaio(getForma(obj2));

	if (d <= raio1+raio2) {
		return 1;
	}
	else {
		return 0;
	}
}

int sobrepoeRetanguloRetangulo(Objeto obj1, Objeto obj2) {
	double x1 = 0, y1 = 0;
	double largura1 = 0, altura1 = 0;
	double x2 = 0, y2 = 0;
	double largura2 = 0, altura2 = 0;

	x1 = getX(getPosicao(obj1));
	y1 = getY(getPosicao(obj1));
	x2 = getX(getPosicao(obj2));
	y2 = getY(getPosicao(obj2));

	largura1 = getLargura(getForma(obj1));
	altura1 = getAltura(getForma(obj1));
	largura2 = getLargura(getForma(obj2));
	altura2 = getAltura(getForma(obj2));

	if(x1+largura1 >= x2 && x2+largura2 >= x1
		&& y1+altura1 >= y2 && y2+altura2 >= y1) {
		return 1;
	}
	else {
		return 0;
	}
}

int sobrepoeCirculoRetangulo(Objeto obj1, Objeto obj2) {
	return 1;
}
int sobrepoe(Objeto obj1, Objeto obj2, Sobrepoe s) {
	return 1;
}
