all: gcd reducefraction

reducefraction: reducefraction.o basics.o
	gcc -o reducefraction reducefraction.o basics.o

gcd: gcd.o basics.o
	gcc -o gcd gcd.o basics.o

gcd.o: gcd.c
	gcc -c gcd.c

reducefraction.o: reducefraction.c
	gcc -c reducefraction.c

basics.o: basics.c
	gcc -c basics.c
