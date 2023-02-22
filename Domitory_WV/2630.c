/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[300][300];
int click = 0;
int blue = 0;

int check(int n, int x, int y) {
	int k = 0;
	int c = 0;
	for (int i = y; i > y - n; i--) {
		for (int j = x; j > x - n; j--) {
			if (Arr[i][j] == 1) k = 1;
			else c = 1;
		}
	}

	if (c == 0) k += 1;

	return k;

}

int block(int n, int x, int y) {

	int x2 = x;
	int x1 = x - n/2;
	int x3 = x - n/2;
	int x4 = x;

	int y1 = y;
	int y2 = y - n/2;

	//1번 블록
	int block1 = check(n / 2,x1, y2);
	if (block1 == 0) {
		//이러면 끝
		click += 1;
	}
	else if (block1 == 2) {
		//전부 채우고 있다
		//이래도 끝
		blue += 1;
	}
	else {
		//이럼 바로 다음
		block(n/2, x1, y2);
	}

	//2번 블록
	int block2 = check(n / 2,x2, y2);
	if (block2 == 0) {
		//이러면 끝
		click += 1;
	}
	else if (block2 == 2) {
		//전부 채우고 있다
		//이래도 끝
		blue += 1;

	}
	else {
		//이럼 바로 다음
		block(n/2, x2, y2);
	}

	//3번 블록
	int block3 = check(n / 2,x3, y1);
	if (block3 == 0) {
		//이러면 끝
		click += 1;
	}
	else if (block3 == 2) {
		//전부 채우고 있다
		//이래도 끝
		blue += 1;

	}
	else {
		//이럼 바로 다음
		block(n/2, x3, y1);
	}

	//4번 블록
	int block4 = check(n/2,x4, y1);
	if (block4 == 0) {
		//이러면 끝
		click += 1;
	}
	else if (block4 == 2) {
		//전부 채우고 있다
		//이래도 끝
		blue += 1;

	}
	else {
		//이럼 바로 다음
		block(n/2, x4, y1);
	}
}


int main() {

	int N = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			scanf("%d", &Arr[i][j]);
		}
	}
	
	if (check(N, N, N) == 2) {
		printf("%d\n", 0);
		printf("%d", 1);

	}
	else {
		block(N, N, N);

		printf("%d\n", click);
		printf("%d", blue);
	}
}
*/