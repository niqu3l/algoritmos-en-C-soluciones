#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int ex2_5(int n) { return 5*lg(n) > n; }
int ex2_6(int n) { return n > pow(lg(n),4)/4 && n < pow(lg(n),4)*4 ; }
int ex2_7(int n) { return harmonic(n)*2 < lg(n) + 11; }

void test(int (*f)(int), int n) {
	for (int i = 1; i < n; i++)
		if (f(i)) printf("true for %d\n", i);
}

int main(int argc, char **argv) {
	if (argc != 3) {
		printf("usage: program exercise testCases\n");
		return 0;
	}

	char c = argv[1][2];
	int n = atoi(argv[2]);

	switch(c) {
		case '5': test(ex2_5, n); break;
		case '6': test(ex2_6, n); break;
		case '7': test(ex2_7, n); break;
	}

	return 0;
}
