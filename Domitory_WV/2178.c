/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N, M;
int Arr[200][200] = { 0, };
int check[200][200] = { 0, };
int q[100005][2] = { 0, };
int max[200][200] = { 0, };
int head = 0;
int tail = 0;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0, 0, 1,-1 };
int BFS() {

	while (head < tail) {
		int x = q[head][0];
		int y = q[head][1];
		printf("%d :  %d %d\n", head, x, y);
		check[y][x] = 1;

		for (int i = 0; i < 4; i++) {
			if (((x + dx[i]) >= 0) && ((x + dx[i]) < M) && ((y + dy[i]) >= 0) && ((y + dy[i]) < N)) {
				if ((Arr[y + dy[i]][x + dx[i]] == 1) && (check[y + dy[i]][x + dx[i]] == 0)) {
					q[tail][0] = x + dx[i];
					q[tail][1] = y + dy[i];
					check[y + dy[i]][x + dx[i]] = 1;
					tail++;
					max[y + dy[i]][x + dx[i]] = max[y][x] + 1;
				}
			}
		}

		head++;

	}


}

int main() {

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		char k[1000] = { 0, };
		scanf("%s", &k);
		for (int j = 0; j < M; j++) {
			if (k[j] == '1') {
				Arr[i][j] = 1;
			}
			else if (k[j] == '0') {
				Arr[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", Arr[i][j]);
		}
		printf("\n\n");
	}

	if (Arr[0][0] == 1) {
		max[0][0] = 1;
		q[head][0] = 0;
		q[head][1] = 0;
		tail++;
	}
	BFS();

	printf("%d", max[N - 1][M - 1]);

}*/