/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	unsigned long int a = 0;
	unsigned long int b = 0;
	unsigned long int c = 0;

	scanf("%lu", &a);
	scanf("%lu", &b);
	scanf("%lu", &c);

	int dis = 1;

	if (c != 0) {

		for (int i = 0; i < b; i++) {
			a *= dis;
			dis = a % c;
		}

		printf("%lu", dis);
	}

}*/