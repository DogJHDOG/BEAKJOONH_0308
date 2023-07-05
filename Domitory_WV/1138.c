/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int Arr[20] = { 0, };

	int checker[20] = { 0, };

	int click = 0;

	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &Arr[i]);
	}

	for (int i = 0; i < N; i++) {
		if (i == 0) {
			checker[Arr[i]] = i + 1;
			click = Arr[i];
		}
		else if (i == N - 1) {
			for (int j = 0; j < N; j++) {
				if (checker[j] == 0) {
					checker[j] = i + 1;
					break;
				}
			}
		}
		else {
			if (click > Arr[i]) {
				checker[Arr[i]] = i + 1;
				click = Arr[i];
			}
			else {
				int k = 0;
				int temp = Arr[i] - click;
				if (checker[click + k] == 0) {
					if (temp == 0) {
						checker[click + k] = i + 1;
						continue;
					}
					else temp--;
				}

				while (1) {
					k++;
					if (checker[click + k] == 0) {
						if (temp == 0) {
							checker[click + k] = i + 1;
							break;
						}
						else temp--;
					}
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", checker[i]);
	}


}*/