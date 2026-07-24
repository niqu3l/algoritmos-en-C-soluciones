#include <stdio.h>
#include "utils.h"

#define N 100

int main(void) {
	float sum = 0;
	for (int i = 1; i < N; i++) {
		sum += (float)1/i;
	}
	printf("value: %.5f\n", sum);
	printf("aprox: %.5f\n", log(N) + 0.57721);

	return 0;
}
