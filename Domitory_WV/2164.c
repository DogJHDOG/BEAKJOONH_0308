/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[1000003] = { 0, };
int check[1000003] = { 0, };
int main() {

	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		Arr[i] = i;
	}

	for (int i = 1; i < N; i++) {
		Arr[2*i-1] = 0;
		int temp = Arr[2*i];
		Arr[N+i] = temp;
	}


	printf("%d", Arr[N+N-1]);
}*/