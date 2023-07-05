/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	while (1) {
		unsigned int x, y, z;

		scanf("%d %d %d", &x, &y, &z);

		if ((x == 0) && (y == 0) && (z == 0)) {
			return 0;
		}


		if (z < y) {
			int temp = y;
			y = z;
			z = temp;
		}

		if (z < x) {
			int temp = x;
			x = z;
			z = temp;
		}

		if ((z * z) == (x * x + y * y)) {
			printf("right");
		}
		else {
			printf("wrong");
		}
		printf("\n");
	}
}*/