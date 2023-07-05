/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char checker[300][300];
int Arr[300][300];
int click = 0;
int blue = 0;

int check(int n, int x, int y) {
	int k = 0;
	int c = 0;
	for (int i = y; i < y+ n; i++) {
		for (int j = x; j < x + n; j++) {
			if (Arr[i][j] == 1) k = 1;
			else c = 1;
		}
	}

	if (c == 0) k += 1;

	return k;

}

int block(int n, int x, int y) {

	printf("(");

	int N = n / 2;

	int x1 = x;

	int y1 = y;

	//1번 블록
	int block1 = check(N,x1,y1);
	if (block1 == 0) {
		//이러면 끝
		printf("0");
	}
	else if (block1 == 2) {
		//전부 채우고 있다
		//이래도 끝
		printf("1");
	}
	else {
		//이럼 바로 다음
		block(N, x1, y1);
	}

	//2번 블록
	int block2 = check(N, x1+N,y1);
	if (block2 == 0) {
		//이러면 끝
		printf("0");
	}
	else if (block2 == 2) {
		//전부 채우고 있다
		//이래도 끝
		printf("1");

	}
	else {
		//이럼 바로 다음
		block(N, x1 + N, y1);
	}

	//3번 블록
	int block3 = check(N, x1 , y1+N);
	if (block3 == 0) {
		//이러면 끝
		printf("0");
	}
	else if (block3 == 2) {
		//전부 채우고 있다
		//이래도 끝
		printf("1");

	}
	else {
		//이럼 바로 다음
		block(N, x1 , y1+N);
	}

	//4번 블록
	int block4 = check(N, x1 + N, y1+N);
	if (block4 == 0) {
		//이러면 끝
		printf("0");
	}
	else if (block4 == 2) {
		//전부 채우고 있다
		//이래도 끝

		printf("1");


	}
	else {
		//이럼 바로 다음
		block(N, x1 + N, y1+N);
	}

	printf(")");


}


int main() {

	int N = 0;
	scanf("%d", &N);

	//먼저 문자열을 나눈다 
	for (int i = 1; i <= N; i++) {
		scanf("%s", checker[i]);
		for (int j = 0; j <N; j++) {
			
			if (checker[i][j] == '0') {
				Arr[i][j + 1] = 0;
			}
			else {
				Arr[i][j + 1] = 1;
			}
			
		}
	}

	int kkk = check(N, 1, 1);

	if (kkk == 2) {	
		printf("(1)");

	}
	else if (kkk == 0) {
		printf("(0)");
	}
	else {
		block(N, 1, 1);
	}
}*/