all: connectivity generaterandom

generaterandom: generaterandom.o
	gcc -o generaterandom generaterandom.o

connectivity: connectivity.o unionfind.o
	gcc -o connectivity connectivity.o unionfind.o

generaterandom.o: generaterandom.c
	gcc -c generaterandom.c

connectivity.o: connectivity.c
	gcc -c connectivity.c

unionfind.o: unionfind.c
	gcc -c unionfind.c
