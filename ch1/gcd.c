#include <stdio.h>
#include <stdlib.h>
#include "basics.h"

int main(int argc, char **argv) {
	if (argc != 3)
		return 1;

	int m, n;

	m = atoi(argv[1]);
	n = atoi(argv[2]);
		
	printf("%d\n", gcd(m, n));

	return 0;
}
