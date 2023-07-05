/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	long long Arr[105] = { 0, };

	Arr[1] = 1;
	Arr[2] = 1;
	Arr[3] = 1;
	Arr[4] = 2;
	Arr[5] = 2;

	for (int i = 6; i <= 100; i++) {
		Arr[i] = Arr[i - 1] + Arr[i - 5];
	}
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int k;
		scanf("%d", &k);
		printf("%lld\n", Arr[k]);
	}

}
*/