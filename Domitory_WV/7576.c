
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//7576 샘플 코드 바탕 구현 코드 
/*

		#define _CRT_SECURE_NO_WARNINGS
		#include <stdio.h>


		int Arr[2000][2000] = { 0, };
		int q[1000050][2];
		int tot[2000][2000] = { 0, };
		int head = 0, tail = 0;

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

			return 0;
		}

*/

//7576 샘플 코드 
/*
배열을 사용한 큐를 이용하여 BFS를 구현한다.
문제 푸는 시에 문제점
1. 배열의 크기에 대한 간과점
2. 큐의 크기
3. 코드 정확도
*/
/*
#define size_x 1005
#define size_y 1005

int map[size_x][size_y];
int check[size_x][size_y];
int q[1000050][2];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int head = 0, tail = 0;
int x, y;
int main() {
	int M, N;
	int i, j;
	scanf("%d %d", &M, &N);
	for (i = 0; i <= N + 1; i++) {
		for (j = 0; j <= M + 1; j++) {
			map[i][j] = -1;
			check[i][j] = 0;
		}
	}

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= M; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1) {
				q[tail][0] = i;
				q[tail][1] = j; // 매번 익은 애들을 큐에 저장한다.
				tail++;
			}
		}
	}

	while (head < tail) {
		x = q[head][0];
		y = q[head][1];
		head++;
		for (i = 0; i < 4; i++) {
			if (x + dx[i] <= N && y + dy[i] <= M && x + dx[i] >= 1 && y + dy[i] >= 1 && map[x + dx[i]][y + dy[i]] == 0) {
				map[x + dx[i]][y + dy[i]] = 1;
				check[x + dx[i]][y + dy[i]] = check[x][y] + 1; // 몇일 걸리는 지 check 한다.
				q[tail][0] = x + dx[i];
				q[tail][1] = y + dy[i]; // 이번에 익은 애들을 큐에 저장한다.
				tail++;
			}
		}
	}


	int days = 0, count = 0;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= M; j++) {
			if (days < check[i][j]) {
				days = check[i][j];
			}
			if (map[i][j] == 0)
				count = 1;
		}
	}
	if (count == 1)
		printf("-1\n");
	else
		printf("%d\n", days);
	return 0;
}
*/

//7576 초기 시도 시간 초과 코드 
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[2000][2000] = { 0, };


int main() {
	int r;
	int N;
	int M;
	scanf("%d %d", &M, &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &Arr[i][j]);

		}
	}

	int temp = 0;
	int click = 0;
	while (1) {

//		printf("\n%d \n\n", temp);
		click = 0;
		r = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
//				printf("%d ", Arr[i][j]);
				if (Arr[i][j] == 2) {
					click = 1;
					Arr[i][j] = 1;
				}
				else if (Arr[i][j] == 1) {
					click = 1;
					Arr[i][j] = 3;
					if ((i - 1) >= 0) {
						if (Arr[i - 1][j] == 0) {
							Arr[i - 1][j] = 1;
						}
					}
					if ((i + 1) < N) {
						if (Arr[i + 1][j] == 0) {
							Arr[i + 1][j] = 2;
						}
					}
					if ((j - 1) >= 0) {
						if (Arr[i][j - 1] == 0) {
							Arr[i][j - 1] = 1;
						}
					}
					if ((j + 1) < M) {
						if (Arr[i][j+1] == 0) {
							Arr[i][j + 1] = 2;
						}
					}
				}
			}
//			printf("\n");
		}

			if (click == 0) {
				break;
			}

			temp++;

		}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j <M ; j++) {
			if (Arr[i][j] == 0) {
				printf("-1");
				return 0;
			}
		}
	}

	if (r == 0) {

		printf("%d", temp-1);
	}

}


*/