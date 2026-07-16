#include <stdio.h>
#include "basics.h"

int main(int argc, char **argv) {
	if (argc != 2)
		return 1;

	int m, n;
	read_fraction(argv[1], &m, &n);

	int p = gcd(m, n);
	printf("%d/%d\n", m/p, n/p);

	return 0;
}
