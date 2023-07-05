/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int Arr[101][101] = { 0, };
int Arr2[101][101] = { 0, };


int dx[4] = { 1,-1,0,0};
int dy[4] = { 0,0,1,-1};
int N;
int DFS(int k,int x,int y) {
	
//	printf("%d : %d %d\n", k, x, y);
	Arr[y][x] = 0;

	for (int i = 0; i < 4; i++) {
		if ((((x + dx[i]) >= 0) && ((x + dx[i]) < N)) && (((y + dy[i]) >= 0) && ((y + dy[i]) < N))){
			if (k == Arr[y + dy[i]][x + dx[i]]) {
				Arr[y + dy[i]][x + dx[i]] = 0;
				DFS(k, x + dx[i], y + dy[i]);
			}
		}
	}

}

int DFS2(int k, int x, int y) {

//	printf("%d : %d %d\n", k, x, y);
	Arr2[y][x] = 0;

	for (int i = 0; i < 4; i++) {
		if ((((x + dx[i]) >= 0) && ((x + dx[i]) < N)) && (((y + dy[i]) >= 0) && ((y + dy[i]) < N))) {
			if (k == Arr2[y + dy[i]][x + dx[i]]) {
				Arr2[y + dy[i]][x + dx[i]] = 0;
				DFS2(k, x + dx[i], y + dy[i]);
			}
		}
	}
}

//red 1 
//green 2
// 
// 
//blue 3
int click = 0;
int click2 = 0;
int main() {

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		char temp[100] = { 0, };
		scanf("%s", &temp);
		for (int j = 0; j < N; j++) {
			if (temp[j]=='R') {
				Arr[i][j] = 1;
				Arr2[i][j] = 1;
			}
			else if (temp[j] == 'G') {
				Arr[i][j] = 2;
				Arr2[i][j] = 1;
			}
			else if (temp[j] == 'B') {
				Arr[i][j] = 3;
				Arr2[i][j] = 3;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {

			if (Arr[i][j] > 0) {
				click++;
				DFS(Arr[i][j], j, i);
			}
			if (Arr2[i][j] > 0) {
				click2++;
				DFS2(Arr2[i][j], j, i);
			}

		}
	}

	printf("%d %d", click, click2);

}
*/