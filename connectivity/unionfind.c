#include <stdio.h>
#include "unionfind.h"

void print_arr(int arr[], int n) {
	for (int i = 0; i < n; i++)
		printf(" %d", arr[i]);
	printf("\n");
}

void quickfind(int n) {
	int i, p, q, t, id[n];

	for (i = 0; i < n; i++)
		id[i] = i;

	while (scanf("%d %d", &p, &q) == 2) {
		if (id[p] == id[q]) continue;

		for (t = id[p], i = 0; i < n; i++)
			if (id[i] == t) id[i] = id[q];
	
		printf("%d-%d\n", p, q);
	}
}

void quickunion(int n) {
	int i, j, p, q, id[n];

	for (i = 0; i < n; i++)
		id[i] = i;

	while (scanf("%d %d", &p, &q) == 2) {
		for (i = p; id[i] != i; i = id[i]);
		for (j = q; id[j] != j; j = id[j]);

		if (i == j) continue;

		id[i] = j;

		printf("%d-%d\n", p, q);
	}
}

void height_weighted_quickunion(int n) {
	int i, j, p, q, id[n], l1, l2, h[n];

	for (i = 0; i < n; i++) {
		id[i] = i;
		h[i] = 0;
	}

	while (scanf("%d %d", &p, &q) == 2) {
		for (i = p; id[i] != i; i = id[i]);
		for (j = q; id[j] != j; j = id[j]);

		if (i == j) continue;

		if (h[i] < h[j])
			id[i] = j;
		else if (h[j] < h[i])
			id[j] = i;
		else {
			id[i] = j;
			h[j]++;
		}

//		printf("%d-%d\n", p, q);
	}
}

void weighted_quickunion(int n) {
	int i, j, p, q, id[n], sz[n];

	for (i = 0; i < n; i++) {
		id[i] = i;
		sz[i] = 1;
	}

	while (scanf("%d %d", &p, &q) == 2) {
		for (i = p; id[i] != i; i = id[i]);
		for (j = q; id[j] != j; j = id[j]);

		if (i == j) continue;

		if (sz[i] < sz[j]) {
			id[i] = j;
			sz[j] += sz[i];
		} else {
			id[j] = i;
			sz[i] += sz[j];
		}

//		printf("%d-%d\n", p, q);
	}
}

void weighted_compresed_quickunion(int n) {
	int i, j, p, q, id[n], size[n];

	for (i = 0; i < n; i++) {
		id[i] = i;
		size[i] = 1;
	}

	while (scanf("%d %d", &p, &q) == 2) {
		for (i = p; id[i] != i; i = id[i])
			id[i] = id[id[i]];
		for (j = q; id[j] != j; j = id[j])
			id[j] = id[id[j]];

		if (i == j) continue;

		if (size[i] < size[j]) {
			id[i] = j;
			size[j] += size[i];
		} else {
			id[j] = i;
			size[i] += size[j];
		}

		printf("%d-%d\n", p, q);
	}
}

void weighted_full_compresed_quickunion(int n) {
	int i, j, p, q, id[n], size[n], root;

	for (i = 0; i < n; i++) {
		id[i] = i;
		size[i] = 1;
	}

	while (scanf("%d %d", &p, &q) == 2) {
		for (i = p; id[i] != i; i = id[i]);
		for (j = q; id[j] != j; j = id[j]);

		if (i == j) continue;

		if (size[i] < size[j]) {
			root = j;
			id[i] = root;
			size[j] += size[i];
		} else {
			root = i;
			id[j] = root;
			size[i] += size[j];
		}

		for (int l = p; id[l] != l;) {
			int t = id[l];
			id[l] = root;
			l = t;
		}
		for (int l = q; id[l] != l;) {
			int t = id[l];
			id[l] = root;
			l = t;
		}

		printf("%d-%d\n", p, q);
	}
}
