/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[5000][5000];
int checker[3] = { 0, };

int check(int x, int y, int n) {

	int temp = Arr[y][x];

	for (int i = y; i < y + n; i++) {
		for (int j = x; j < x + n; j++) {
			if (temp != Arr[i][j]) {
				block(x, y, 3 / n);
				return 0;
			}
		}
	}

	checker[temp + 1] += 1;


}


int block(int x, int y, int n) {

	int n1 = n ;
	int x1 = x;
	int y1 = y;

	check(x1, y1, n1);
	check(x1+n1, y1, n1);
	check(x1+n1+n1, y1, n1);
	check(x1, y1+n1, n1);
	check(x1+n1, y1+n1, n1);
	check(x1+n1+n1, y1+n1, n1);
	check(x1, y1+n1+n1, n1);
	check(x1+n1, y1+n1+n1, n1);
	check(x1+n1+n1, y1+n1+n1, n1);

}


int main() {


	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			scanf("%d", &Arr[i][j]);
		}
	}

	check(1, 1, N);

	printf("%d", checker[0]);
	printf("\n%d", checker[1]);
	printf("%d", checker[2]);

}*/