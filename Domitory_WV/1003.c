#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int Arr[45][2] = {0,};

	int T;

	Arr[0][0] = 1;
	Arr[1][1] = 1;

	for (int i = 2; i < 41; i++) {
		Arr[i][0] = Arr[i - 1][0] + Arr[i - 2][0];
		Arr[i][1] = Arr[i - 1][1] + Arr[i - 2][1];
	}

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int k;
		scanf("%d", &k);
		printf("%d %d\n", Arr[k][0], Arr[k][1]);
	}

}