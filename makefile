src = $(wildcard *.c) \
	$(wildcard Arquivos/*.c) \
	$(wildcard Geometria/Formas/*.c) \
	$(wildcard Geometria/*.c) \
	$(wildcard Objetos/*.c)
obj = $(src:.c=.o)
flags = -lm -g

teste: $(obj)
	$(CC) -o teste $(obj) $(flags)
clean:
	rm -f $(obj) teste *.svg