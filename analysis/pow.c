#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char **argv) {
	if (argc != 3) {
		printf("usage: pow [base] [exponent]\n");
		return 0;
	}

	double base = atof(argv[1]);
	int exp = atoi(argv[2]);

	printf("%lf\n", pow(base, exp));

	return 0;
}
