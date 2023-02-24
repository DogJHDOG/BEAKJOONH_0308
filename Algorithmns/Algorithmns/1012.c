#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[100][100] = { 0, };
int M, N, K;


int DFS(int x, int y) {

//	printf("%d %d\n", y, x);
	Arr[y][x] = 2;

	if ((y - 1) >= 0) {
		if (Arr[y - 1][x] == 1) {
			Arr[y-1][x] = 2;
			DFS(x,y-1);
		}
	}
	if ((y + 1) < N) {
		if (Arr[y + 1][x] == 1) {
			Arr[y + 1][x] = 2;

			DFS(x, y + 1);

		}
	}
	if ((x - 1) >= 0) {
		if (Arr[y][x-1] == 1) {
			Arr[y][x-1] = 2;
			DFS(x-1, y);

		}
	}
	if ((x + 1) < M) {
		if (Arr[y][x+1] == 1) {
			Arr[y][x+1] = 2;
			DFS(x+1, y);

		}
	}


}

int main() {

	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &M, &N, &K);
		for (int j = 0; j < K; j++) {
			int x, y;
			scanf("%d %d", &x, &y);
			Arr[y][x] = 1;
		}
		int click = 0;
		for (int j = 0; j < N; j++) {
			for (int l = 0; l < M; l++) {
				if (Arr[j][l] == 1) {
//					printf("%d %d\n", j, l);
					click++;
					DFS(l, j);
//					printf("%d\n", click);
				}
			}
		}
		for (int j = 0; j < N; j++){
			for (int l = 0; l < M; l++) {
				Arr[j][l] = 0;
			}
		}

		printf("%d\n", click);

	}



}