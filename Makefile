all: cliente servidor

cliente: cliente.c
	gcc -c cliente.c

servidor: servidor.c	
	gcc -c servidor.c

clear:
	rm cliente
	rm servidor