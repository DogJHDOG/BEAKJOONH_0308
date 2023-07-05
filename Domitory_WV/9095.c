/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int Arr[100] = { 0, };

	Arr[1] = 1;
	Arr[2] = 2;
	Arr[3] = 4;

	for (int i = 4; i <= 11; i++) {

		Arr[i] = Arr[i - 1] + Arr[i - 2] + Arr[i - 3];

	}

	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int k;
		scanf("%d", &k);
		printf("%d\n", Arr[k]);
	}
		 
}*/