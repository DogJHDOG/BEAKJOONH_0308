/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1회 수정 X,Y,Z 문제 내에 정해져 있음 - > 확인 못함 -> 고쳐짐

int Arr[105][105][105] = { 0, };
int head = 0;
int tail = 0;
int q[1000005][3] = { 0, };
int check[105][105][105] = { 0, };


int dx[6] = { 1,-1,0,0,0,0 };
int dy[6] = { 0,0,1,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };

int X, Y, Z;

void BFS() {

	int x = q[head][0];
	int y = q[head][1];
	int z = q[head][2];
//	printf("%d %d %d\n", x, y, z);
	Arr[x][y][z] = 2;
	for (int i = 0; i < 6; i++) {
		if((((x + dx[i]) >= 0) && ((x + dx[i]) < X)) && (((y + dy[i]) >= 0) && ((y + dy[i]) < Y)) && (((z + dz[i]) >= 0) && ((z + dz[i]) < Z))) {
			if (Arr[x + dx[i]][y + dy[i]][z + dz[i]] == 0) {
				q[tail][0] = x + dx[i];
				q[tail][1] = y + dy[i];
				q[tail][2] = z + dz[i];
				check[x + dx[i]][y + dy[i]][z + dz[i]] = check[x][y][z] + 1;
				Arr[q[tail][0]][q[tail][1]][q[tail][2]] = 2;
				tail++;
			}
		}
	}
	head++;
}


int main() {

	scanf("%d %d %d", &Z, & X, &Y);

	for (int i = 0; i < Y; i++) {
		for (int j = 0; j < X; j++) {
			for (int k = 0; k < Z; k++) {

				scanf("%d", &Arr[j][i][k]);	
				if (Arr[j][i][k] == 1) {
					q[tail][0] = j;
					q[tail][1] = i;
					q[tail][2] = k;
//					printf("%d %d %d", j, i, k);
					check[j][i][k] = 1;
					tail++;
				}
				else if (Arr[j][i][k] == -1) {
					check[j][i][k] = -1;

				}
			}
		}
	}

	while (head < tail) {
		BFS();
	}

	int mst = 0;

	for (int i = 0; i < Y; i++) {
		for (int j = 0; j < X; j++) {
			for (int k = 0; k < Z; k++) {
				if (check[j][i][k] == 0) {
					printf("-1");
					return 0;
				}
				else{
					if (check[j][i][k] > mst) mst = check[j][i][k];
				}
			}
		}
	}

	printf("%d", mst-1);
}*/