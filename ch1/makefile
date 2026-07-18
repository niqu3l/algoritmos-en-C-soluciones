all: gcd reducefraction binary gcd3

gcd3: gcd3.o basics.o
	gcc -o gcd3 gcd3.o basics.o

binary: binary.o
	gcc -o binary binary.o

reducefraction: reducefraction.o basics.o
	gcc -o reducefraction reducefraction.o basics.o

gcd: gcd.o basics.o
	gcc -o gcd gcd.o basics.o

gcd.o: gcd.c
	gcc -c gcd.c

reducefraction.o: reducefraction.c
	gcc -c reducefraction.c

binary.o: binary.c
	gcc -c binary.c

gcd3.o: gcd3.c
	gcc -c gcd3.c

basics.o: basics.c
	gcc -c basics.c
