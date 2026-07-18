#include <stdio.h>

void binary(int n) {
	if (n == 0) {
		printf("0");
		return;
	} else if (n == 1) {
		printf("1");
		return;
	}

	binary(n/2);
	printf("%d", n % 2);
}

int main(void) {
	int n;
	
	if (scanf(" %d", &n) == EOF)
		return 1;

	binary(n);
	printf("\n");

	return 0;
}
