/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int H, W, N;

		scanf("%d %d %d", &H, &W, &N);

		int first = N % H;
		int second = (N / H) + 1;

		if (first == 0) { 
			first = H;
			second--;
		}

		
		if (second < 10) {
			printf("%d0%d\n", first, second);
		}
		else {
			printf("%d%d\n", first, second);
		}
	}

}*/

