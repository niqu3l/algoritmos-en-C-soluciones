#include <stdio.h>
#include <stdlib.h>
#include "basics.h"

int gcd3(int m, int n, int o) {
	gcd(m, gcd(n, o));
}

int main(int argc, char **argv) {
	if (argc != 4)
		return 1;

	int m, n, o;

	m = atoi(argv[1]);
	n = atoi(argv[2]);
	o = atoi(argv[3]);
		
	printf("%d\n", gcd3(m, n, o));

	return 0;
}
