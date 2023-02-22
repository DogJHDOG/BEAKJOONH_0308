/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	int K;
	scanf("%d", &K);


	int Arr[2000] = { 0, };
	int temp[2000] = { 0, };
	for (int i = 0; i < N; i++) {
		Arr[i] = i + 1;
		temp[i] = Arr[i];
	}

	printf("<");
	for (int i = 0; i < N; i++) {
		if (i == (N - 1)) {
			printf("%d> ", temp[0]);

		}
		else {
			int t = K % (N - i);
			if (t == 0) t = (N - i);


			printf("%d, ", temp[t - 1]);
			Arr[t - 1] = 0;

			for (int l = 0; l < (N - i); l++) {
				if (t == (N - i)) {
					t = 0;
				}
				temp[l] = Arr[t++];

			}

			for (int tt = 0; tt < (N - i); tt++) {
				Arr[tt] = temp[tt];
			}
		}
	}



}*/