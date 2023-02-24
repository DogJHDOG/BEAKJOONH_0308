
//2178 틀림
//질문 해놓음 
//확인필요

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check[200][200] = { 0, };
int tot[200][200] = { 0, };
int Arr[200][200] = { 0, };
int q[10000][2] = { 0, };
int N, M;
int head = 1;
int tail = 1;


int BFS() {

	int tx = q[head][0];
	int ty = q[head][1];
	Arr[ty][tx] = 2;

	int click = 0;
	
	if ((ty - 1) > 0) {
		
		if (Arr[ty - 1][tx] == 1) {
			q[tail][0] = tx;
			q[tail][1] = ty - 1;
			tail++;
			tot[ty-1][tx] = tot[ty][tx] + 1;
		}
	}
	if ((ty + 1) <= N) {
		if (Arr[ty + 1][tx] == 1) {
			q[tail][0] = tx;
			q[tail][1] = ty + 1;
			tail++;
			tot[ty+ 1][tx] = tot[ty][tx] + 1;
		}
	}
	if ((tx - 1) > 0) {
		if (Arr[ty][tx - 1] == 1) {
			q[tail][0] = tx - 1;
			q[tail][1] = ty;
			tail++;
			tot[ty][tx -1] = tot[ty][tx] + 1;
		}
	}
	if ((tx + 1) <= M) {
		if (Arr[ty][tx + 1] == 1) {
			q[tail][0] = tx + 1;
			q[tail][1] = ty;
			tail++;
			tot[ty][tx + 1] = tot[ty][tx] + 1;
		}
	}
	head++;


}


int main() {

	scanf("%d %d", &N, & M);

	for (int i = 1; i <= N; i++) {
		char k[2000] = { 0, };
		scanf("%s", &k);
		for (int j = 1; j <= M; j++) {
			if (k[j-1] == '1') {
				Arr[i][j] = 1;
			}
			else {
				Arr[i][j] = 0;
			}
		}
	}

	q[tail][0] = 1;
	q[tail][1] = 1;
	tot[1][1] = 1;	
	tail++;

	while (head < tail) {
		BFS();
	}
	if (tot[N][M] != 0) {
		printf("%d", tot[N][M]);
	}

}
*/