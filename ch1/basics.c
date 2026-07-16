#include "basics.h"

int gcd(int m, int n) {
	if (n > m) {
		int t = m;
		m = n;
		n = t;
	} 

	while (n > 0) {
		int t = n;
		n = m % n;
		m = t;
	}

	return m;
}

void read_fraction(char *f, int *m, int *n) {
	int i = 0;

	*m = *n = 0;
	while (f[i] != '/') {
		*m *= 10;
		*m += f[i] - '0';
		i++;
	}

	i++;

	while (f[i] != '\0') {
		*n *= 10;
		*n += f[i] - '0';
		i++;
	}
}
