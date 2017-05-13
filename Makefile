all: cliente servidor

cliente: cliente.o biblioteca.o
	gcc -o cliente cliente.o biblioteca.o

cliente.o: cliente.c
	gcc -c cliente.c -o cliente.o

servidor: servidor.o biblioteca.o
	gcc -o servidor servidor.o biblioteca.o

servidor.o: servidor.c	
	gcc -c servidor.c -o servidor.o

biblioteca.o: biblioteca.c
	gcc -o biblioteca.o -c biblioteca.c


clean:
	rm cliente
	rm cliente.o
	rm servidor
	rm servidor.o
	rm biblioteca.o