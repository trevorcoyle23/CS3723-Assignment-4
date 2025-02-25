// gcc -Wall sum5.c -o sum5
// ./sum5 4 8 -5 0 20
// prints: Sum=27 Sum2=505 Sum3=8451

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x; // Sum
	int y; // Sum Squares
	int z; // Sum Cubes
} sum_t;

static sum_t *sum5(int argc, char *argv[]) {
	sum_t *sum = (sum_t *) malloc(sizeof(sum_t));
	if (sum == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}

	sum->x = 0;
	sum->y = 0;
	sum->z = 0;

	int i;

	for (i = 1; i < argc; i++) {
		int n = atoi(argv[i]);
		sum->x += n;
		sum->y += n * n;
		sum->z += n * n * n;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s <numbers[]>\n", argv[0]);
		return 1;
	}

	sum_t *m = sum5(argc, argv);
	printf("Sum=%d Sum2=%d Sum3=%d\n", m->x, m->y, m->z);

	free(m); // Free allocated memory

	return 0;
}
