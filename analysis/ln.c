#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char **argv) {
	if (argc != 2) {
		printf("usage: ln [num]\n");
		return 0;
	}

	double num = atoi(argv[1]);

	printf("%lf\n", ln(num));

	return 0;
}
