#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define R 1000

int main(int argc, char **argv) {
	if (argc != 3) {
		printf("usage: program pairs range\n");
		return 1;
	}

	srand(time(NULL));
	
	FILE *fp = fopen("test", "w");
	if (!fp)
		return 1;
	
	int m = atoi(argv[1]);
	int r = atoi(argv[2]);


	fprintf(fp, "%d\n", r);
	for (int i = m; i >= 1; i--)
		fprintf(fp, "%d %d\n", rand() % r, rand() % r);

	fclose(fp);

	return 0;
}
