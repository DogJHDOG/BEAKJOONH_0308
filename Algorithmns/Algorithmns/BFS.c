/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int Arr[1005][1005] = { 0, };
int check[1005] = { 0, };
int check2[1005] = { 0, };
int front = 0;
int back = 0;

int click = 0;
int stack[100000] = { 0, };

int DFS(int num) {

	if (front < 0) {
	}
	else {
		if (check[num] == 0) printf("%d ", num);
		check[num] = 1;

		click = 0;

		for (int i = 0; i < 1005; i++) {
			if (Arr[num][i] == 1 && check[i] == 0) {
				click = 1;
				stack[++front] = i;
				DFS(i);
				break;
			}
		}

		if (click == 0)
		{
			stack[front] = 0;
			front--;
			DFS(stack[front]);
		}
	}
}

int q[100000]= { 0, };
int head = 0;
int tail = 0;


int BFS() {
	
	while (head < tail) {

		for (int i = 0; i < 1005; i++) {
			if (Arr[q[head]][i] == 1 && check2[i] == 0) {
				q[tail++] = i;
			}
		}

		if (check2[q[head]] == 0) {
			printf("%d ", q[head]);
			check2[q[head]] = 1;
		}
		head++;
	
	}
}

int main() {

	int N, M, V;

	scanf("%d %d %d", &N, &M, &V);

	for (int i = 0; i < M; i++) {
		int num = 0;
		int con = 0;
		//연결된 부분에 대한 표시를 진행합니다.
		scanf("%d %d", &num, &con);
		Arr[num][con] = 1;
		Arr[con][num] = 1;
	}
	q[tail++] = V;
	stack[front] = V;
	DFS(V);
	printf("\n");
	BFS();
}
*/