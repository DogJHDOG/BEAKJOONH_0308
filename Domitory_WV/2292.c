/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int N;
	scanf("%d", &N);

	int k = 1;
	int click = 7;
	while (1) {
	
		if (N == 1) {
			printf("1");
			return 0;
		}

		if (N<=click) {
			printf("%d",k+1);
			return 0;
		}		
		k++;
		click = click + (6*k);
	
	}

}*/