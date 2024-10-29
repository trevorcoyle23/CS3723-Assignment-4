// gcc -Wall sum7.c -o sum7
// ./sum7 4 8 -5 0 20
// prints: Sum=27 Sum2=505 Sum3=8451

#include <stdio.h>
#include <stdlib.h>

#define sum7(argc, argv, x, y, z) \
	x = 0; \
	y = 0; \
	z = 0; \
	int i; \
	for (i = 1; i < argc; i++) { \
		int n = atoi(argv[i]); \
		x += n; \
		y += n * n; \
		z += n * n * n; \
	}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s <numbers[]>\n", argv[0]);
		return 1;
	}

	int x, y, z;
	
	sum7(argc, argv, x, y, z);
	printf("Sum=%d Sum2=%d Sum3=%d\n", x, y, z);
	return 0;
}
