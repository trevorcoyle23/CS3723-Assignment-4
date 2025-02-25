// gcc -Wall sum2.c -o sum2
// ./sum2 4 8 -5 0 20
// prints: Sum=27 Sum2=505 Sum3=8451

#include <stdio.h>
#include <stdlib.h>

static int x = 0; // Sum
static int y = 0; // Sum Squares
static int z = 0; // Sum Cubes

static void sum2(int argc, char *argv[]) {
	int i;
	for (i = 1; i < argc; i++) {
		int n = atoi(argv[i]);
		x += n;
		y += n * n;
		z += n * n * n;
	}
}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s <numbers[]>\n", argv[0]);
		return 1;
	}

	sum2(argc, argv);
	printf("Sum=%d Sum2=%d Sum3=%d\n", x, y, z);
	return 0;
}
