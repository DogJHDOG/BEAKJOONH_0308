/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[20][20] = { 0, };

int main() {

	int T;
	scanf("%d", &T);
	int l;

	for (int i = 0; i <= 14; i++) {
		Arr[0][i] = i;
	}

	for (int i = 1; i <= 14; i++) {
		for (int j = 1; j <= 14; j++) {
			for (int k = 1; k <= j; k++) {
				Arr[i][j] += Arr[i - 1][k];
			}
		}
	}

	for (int i = 0; i < T; i++) {
		int k = 0;
		int n = 0;
		scanf("%d", &k);
		scanf("%d", &n);

		printf("%d\n", Arr[k][n]);

	}

}*/