// gcc -Wall sum1.c -o sum1
// ./sum1 4 8 -5 0 20
// prints: Sum=27 Sum2=505 Sum3=8451

#include <stdio.h>
#include <stdlib.h>

static int sum1(int argc, char *argv[]) {
	int sum = 0;
	int i;
	for (i = 1; i < argc; i++) {
		int n = atoi(argv[i]);
		sum += n;
	}
	return sum;
}

static int sum2(int argc, char *argv[]) {
	int sum = 0;
	int i;
	for (i = 1; i < argc; i++) {
		int n = atoi(argv[i]);
		sum += n * n;
	}
	return sum;
}

static int sum3(int argc, char *argv[]) {
	int sum = 0;
	int i;
	for (i = 1; i < argc; i++) {
		int n = atoi(argv[i]);
		sum += n * n * n;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	int x = sum1(argc, argv);
	int y = sum2(argc, argv);
	int z = sum3(argc, argv);
	printf("Sum=%d Sum2=%d Sum3=%d\n", x, y, z);
	return 0;
}
