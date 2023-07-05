/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	int check = -1;
	int i = 0;
	
	while (1) {

		if (N == 0) {
			printf("%d", i);
			break;
		}
		else if (N < 0) {
			printf("%d", check);
			break;
		}

		if ((N % 3) == 0) {
			check = i + (N / 3);
		}
		
		N = N - 5;	
		i++;

	}


}*/