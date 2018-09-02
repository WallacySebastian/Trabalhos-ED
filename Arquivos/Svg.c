#include <stdio.h>
#include <stdlib.h>
#include "Svg.h"

void iniciarSvg(FILE *arquivo) {
	fprintf(arquivo, "<svg version=\"1.1\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\">\n");
}

void escreverPonto(FILE *arquivo, Ponto p) {
	fprintf(
		arquivo,
		"<circle cx=\"%lf\" cy=\"%lf\" r=\"5\" fill=\"black\" />\n",
		getX(p), getY(p));
}

void escreverReta(FILE *arquivo, Reta r) {
	fprintf(
		arquivo,
		"<line x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" style=\"stroke:rgb(255,0,0);stroke-width:2\" />\n",
		getX(getP1(r)), getY(getP1(r)), getX(getP2(r)), getY(getP2(r)));
}

void escreverCirculo(FILE *arquivo, Objeto obj) {
	fprintf(
		arquivo,
		"<circle cx=\"%lf\" cy=\"%lf\" r=\"%lf\" stroke=\"%s\" stroke-width=\"2\" fill=\"%s\" />\n",
		getX(getPosicao(obj)), getY(getPosicao(obj)), getRaio((Circulo) getForma(obj)), getCor1(obj), getCor2(obj));
}

void escreverRetangulo(FILE *arquivo, Objeto obj) {
	fprintf(
		arquivo,
		"<rect x=\"%lf\" y=\"%lf\" width=\"%lf\" height=\"%lf\" stroke=\"%s\" stroke-width\"2\" fill=\"%s\" />\n",
		getX(getPosicao(obj)), getY(getPosicao(obj)), getLargura((Retangulo) getForma(obj)), getAltura((Retangulo) getForma(obj)), getCor1(obj), getCor2(obj));
}

void escreverForma(FILE *arquivo, Objeto obj, EscreverForma ef) {
	ef(arquivo, obj);
}

void terminarSvg(FILE *arquivo) {
	fprintf(arquivo, "</svg>\n");
}
