/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check[25][25] = { 0, };
int Arr[25][25] = { 0, };
int temp[25][25] = { 0, };

int size = 2;
int click = 0;

int head = 0;
int tail = 0;

q[10000][2] = { 0, };
int max = 0;
int dx[4] = { 0,-1,1,0 };
int dy[4] = { -1,0,0,1 };
int N;

int BFS(int X, int Y) {

	q[head][0] = X;
	q[head][1] = Y;
	tail++;
	printf("\n%d %d %d\n", max,size,click);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			temp[i][j] = 0;
			printf("%d ", Arr[i][j]);
		}
		printf("\n");
	}
	
	while (head < tail)
	{

		int x = q[head][0];
		int y = q[head][1];
//		printf("%d %d\n", x, y);
		for (int i = 0; i < 4; i++) {
			if ((((x + dx[i]) >= 0) && ((x + dx[i]) < N)) && (((y + dy[i]) >= 0) && ((y + dy[i]) < N))) {
				if (size >= Arr[y + dy[i]][x + dx[i]]) {
	//				printf("%d %d %d\n", x+dx[i], y+dy[i], Arr[y + dy[i]][x + dx[i]]);

					if (temp[y + dy[i]][x + dx[i]] == 0) {
						temp[y + dy[i]][x + dx[i]] = 1;
						check[y + dy[i]][x + dx[i]] = check[y][x] + 1;
						q[tail][0] = x + dx[i];
						q[tail][1] = y + dy[i];
						tail++;

						if ((Arr[y + dy[i]][x + dx[i]] > 0)&&(Arr[y+dy[i]][x+dx[i]] < size)) {						
							
							click++;
							int tt = 0;
							int tk = 0;

							if (y + dy[i] > q[head][1]) {

								for (int k = head + 1; k < tail; k++) {
									
									if ((Arr[q[k][1]][q[k][0]] < size)&&q[head][1]<q[k][1]) {
										tt = 1;
										if (click == size) {
											size += 1;
											click = 0;
										}
										head = 0;
										tail = 0;
										Arr[q[k][1]][q[k][0]] = 0;
//										Arr[y + dy[i]][x + dx[i]] = 0;
										max = check[q[k][1]][q[k][0]];
										tk = k;
										break;
									}
							}

							}
							if (tt == 0) {
								if (click == size) {
									size += 1;
									click = 0;
								}
								head = 0;
								tail = 0;
								Arr[q[head][1]][q[head][0]] = 0;
								Arr[y + dy[i]][x + dx[i]] = 0;
								max = check[y + dy[i]][x + dx[i]];
								BFS(x + dx[i], y + dy[i]);
								break;
							}
							else {
								BFS(q[tk][0], q[tk][1]);
								break;
							}
						}
					}
				}
			}
		}
		head++;

	}

}

int main() {

	scanf("%d", &N);
	int x = 0;
	int y = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &Arr[i][j]);
			if (Arr[i][j] == 9) {
				x = j;
				y = i;
				Arr[i][j] = size;
			}
		}
	}

	BFS(x, y);

	printf("%d", max);
}

*/