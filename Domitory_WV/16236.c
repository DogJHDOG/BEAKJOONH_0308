
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
	Arr[q[0][1]][q[0][0]] = 0;

	tail++;
//	printf("\n%d %d %d\n", max,size,click);
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			temp[i][j] = 0;
//			printf("%d ", Arr[i][j]);
		}
//		printf("\n");
	}
	
	while (head < tail)
	{

		int x = q[head][0];
		int y = q[head][1];

		if ((size > Arr[y][x]) && (Arr[y][x] > 0)) {
			click++;
			int tt = 0;
			int tk = 0;
	
			int large = q[head][1];
			int semi = q[head][0];
			for (int k = head + 1; k < tail; k++) {
				if ((check[q[k][1]][q[k][0]]<=check[y][x]) && (Arr[q[k][1]][q[k][0]] < size)&&(Arr[q[k][1]][q[k][0]]>0)) {
					if (large > q[k][1]) {
						tt = 1;
						large = q[k][1];
						max = check[q[k][1]][q[k][0]];
						tk = k;
					}
					else if (large == q[k][1]) {
						if (q[k][0] < semi) {
							tt = 1;
							semi = q[k][0];
							max = check[q[k][1]][q[k][0]];
							tk = k;
						}
					}
				}
			}
			
			if (click == size) {
				size += 1;
				click = 0;
			}

			if (tt == 0) {
				Arr[y][x] = 0;
				head = 0;
				tail = 0;
				max = check[y][x];
				BFS(x, y);
				break;
			}
			
			else {

				Arr[q[tk][1]][q[tk][0]] = 0;
				head = 0;
				tail = 0;
				max = check[q[tk][1]][q[tk][0]];
				BFS(q[tk][0], q[tk][1]);
				break;
			}
		}
		else {
			for (int i = 0; i < 4; i++) {
				if ((((x + dx[i]) >= 0) && ((x + dx[i]) < N)) && (((y + dy[i]) >= 0) && ((y + dy[i]) < N))) {
					if (size >= Arr[y + dy[i]][x + dx[i]]) {
						if (temp[y + dy[i]][x + dx[i]] == 0) {
							temp[y + dy[i]][x + dx[i]] = 1;
							check[y + dy[i]][x + dx[i]] = check[y][x] + 1;
							q[tail][0] = x + dx[i];
							q[tail][1] = y + dy[i];
							tail++;
							}

						}
					}
				}
			head++;
		}
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
				Arr[i][j] = 0;
			}
		}
	}

	BFS(x, y);

	printf("%d", max);
}