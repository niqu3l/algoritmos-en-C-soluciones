#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char **argv) {
	if (argc != 3) {
		printf("usage: log [base] [num]\n");
		return 0;
	}

	double base = atof(argv[1]);
	double num = atoi(argv[2]);

	printf("%lf\n", log(base, num));

	return 0;
}
