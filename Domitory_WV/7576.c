
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[2000][2000] = { 0, };
int q[1000050][2];
int tot[10000][10000] = { 0, };
int head = 0, tail = 0;

int temp = 0;
int r = 0;
int N;
int M;
void check() {

	Arr[q[head][0]][q[head][1]] = 2;

	if ((q[head][0] - 1)>= 0) {
		if ((Arr[(q[head][0] - 1)][(q[head][1])]) == 0) {
			Arr[(q[head][0] - 1)][(q[head][1])] = 1;
			q[tail][0] = q[head][0] - 1;
			q[tail][1] = q[head][1];
			tail++; 
			tot[(q[head][0] - 1)][(q[head][1])] = tot[q[head][0]][q[head][1]]+1;
		}

	}
	if ((q[head][0]+1)<N) {
		if ((Arr[(q[head][0] + 1)][(q[head][1])]) == 0) {
			Arr[(q[head][0] + 1)][(q[head][1])] = 1;	
			q[tail][0] = q[head][0] + 1;
			q[tail][1] = q[head][1];
			tail++; 
			tot[(q[head][0] + 1)][(q[head][1])] = tot[q[head][0]][q[head][1]]+1;

		}
	}
	if ((q[head][1]-1) >= 0) {
		if ((Arr[(q[head][0])][(q[head][1]) - 1]) == 0) {
			Arr[(q[head][0])][(q[head][1] - 1)] = 1;	
			q[tail][0] = q[head][0];
			q[tail][1] = q[head][1] - 1;
			tail++; 
			tot[q[head][0]][(q[head][1]) - 1] = tot[q[head][0]][q[head][1]]+1;

		}

	}
	if ((q[head][1] + 1) < M) {
		if ((Arr[(q[head][0])][(q[head][1]) + 1]) == 0) {
			Arr[(q[head][0])][(q[head][1] + 1)] = 1;	
			q[tail][0] = q[head][0];
			q[tail][1] = q[head][1] + 1;
			tail++; 
			tot[(q[head][0])][(q[head][1]) + 1] = tot[q[head][0]][q[head][1]]+1;

		}
	}
	head++;

}

int main() {
	scanf("%d %d", &M, &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &Arr[i][j]);
			if (Arr[i][j] == 1) {
				Arr[i][j] = 2;
				q[tail][0] = i;
				q[tail][1] = j;
				tail++;
			}
		}
	}

	while (head < tail) {
		check();
		printf("\n");
	}

	int days = 0, count = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (days < tot[i][j]) {
				days = tot[i][j];
			}
			if (Arr[i][j] == 0)
				count = 1;
		}
	}
	if (count == 1)
		printf("-1\n");
	else
		printf("%d\n", days);






}

