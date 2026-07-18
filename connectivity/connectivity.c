#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "unionfind.h"

int main() {
	struct timeval stop, start;
	gettimeofday(&start, NULL);

	int r;
	scanf("%d", &r);

//	quickfind(r);
//	quickunion(r);
//	weighted_quickunion(r);
//	weighted_compresed_quickunion(r);
//	weighted_full_compresed_quickunion(r);
	height_weighted_quickunion(r);

	gettimeofday(&stop, NULL);
	printf("time: %lu ms\n", (stop.tv_sec - start.tv_sec) * 1000 + (stop.tv_usec - start.tv_usec) / 1000);

	return 0;
}
