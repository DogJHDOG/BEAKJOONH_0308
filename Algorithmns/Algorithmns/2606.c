/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int head = 0;
int tail = 0;

int Arr[200][200] = { 0, };

int queue[100000] = { 0, };
int check[200] = { 0, };

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		Arr[i][i] = 0;
	}

	int l = 0;
	scanf("%d", &l);
	for (int i = 0; i < l; i++) {
		int k, j;
		scanf("%d %d", &k, &j);
		Arr[k][j] = 1;
		Arr[j][k] = 1;

	}
	queue[head] = 1;
	check[1] = 1;
	tail++;
	int click = 0;

	while (head < tail) {

		for (int i = 1; i <= n;i++) {
			if (Arr[queue[head]][i] == 1&&check[i]==0) {
				click++;
				check[i] = 1;
				queue[tail++] = i;
			}
		}
		head++;
	
	}
	//1번이 웜 바이러스에 걸림
	
	printf("%d", click);

}*/