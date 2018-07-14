teste: Ponto.o Reta.o Calculos_G.o Circulo.o Retangulo.o Forma.o Objeto.o Calculos_O.o Svg.o teste.o
	gcc -o teste Ponto.o Reta.o Calculos_G.o Circulo.o Retangulo.o Forma.o Objeto.o Calculos_O.o Svg.o teste.o -lm -g
Ponto.o: Geometria/Ponto.c
	gcc -o Ponto.o -c Geometria/Ponto.c
Reta.o: Geometria/Reta.c
	gcc -o Reta.o -c Geometria/Reta.c
Circulo.o: Geometria/Formas/Circulo.c
	gcc -o Circulo.o -c Geometria/Formas/Circulo.c
Retangulo.o: Geometria/Formas/Retangulo.c
	gcc -o Retangulo.o -c Geometria/Formas/Retangulo.c
Forma.o: Geometria/Formas/Forma.c
	gcc -o Forma.o -c Geometria/Formas/Forma.c
Calculos_G.o: Geometria/Calculos.c
	gcc -o Calculos_G.o -c Geometria/Calculos.c
Objeto.o: Objetos/Objeto.c
	gcc -o Objeto.o -c Objetos/Objeto.c
Calculos_O.o: Objetos/Calculos.c
	gcc -o Calculos_O.o -c Objetos/Calculos.c
Svg.o: Arquivos/Svg.c
	gcc -o Svg.o -c Arquivos/Svg.c
teste.o: teste.c
	gcc -o teste.o -c teste.c
clean:
	rm -rf *.o teste
