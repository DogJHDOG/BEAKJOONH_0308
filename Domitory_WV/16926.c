
//	2월 19일	:  Fail -> 질문함 ->  


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, r;
	int k = 0;
	scanf("%d", &r);
	scanf("%d", &n);
	scanf("%d", &k);
	int Arr[330][330] = {0,};
	int res[2000] = { 0, };

	int max[2000] = {0,};

	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &Arr[i][j]);
		}
	}

	int rng = n / 2;

	//회전체 구하기 및 회전수 계산
	for (int i = 0; i < rng; i++) {
		max[i] = 2 * (n - 2 * i) + 2 * (r - 2 * i)-4;
		int x = i;
		int y = i+1;
		for (int j = 0; j < max[i]; j++) {
			if (j < (n-2*i)) {
				x++;
			}
			else if (j < (n+r-2*i-2*i -1)) {
					y++;
			}
			else if (j < ( n - 2 * i + n + r - 2 * i - 2 * i - 2 )) {
				x--;
			}
			else {
				y--;
			}
			res[j] = Arr[y][x];
//			printf("%d ", res[j]);

		}
//		printf("\n");

		int t = k % max[i];
		
		int rx = i;
		int ry = i+1;

		for (int j = 0; j < max[i]; j++) {
			
			if (j < (n - 2 * i)) {
				rx++;
			}
			else if (j < (n + r - 2 * i - 2 * i - 1)) {
				ry++;
			}
			else if (j < (n - 2 * i + n + r - 2 * i - 2 * i - 2)) {
				rx--;
			}
			else {
				ry--;
			}

			Arr[ry][rx] = res[t++];


			if (t == (max[i])) t = 0;
//			printf("%d ", Arr[ry][rx]);

		}
		

//		printf("\n");

	}
	//1차원으로 해당 배열 가져오기 
	//이후 회전수에 따라 새로운 배열에 
	//가져온 배열의 max[i]번째부터 차례로 넣기
	//그리고 해당배열을 순서대로
	//첫번째 x  y 고정
	//두번쨰 x 고정 y
	//세번째 x-- y 고정
	//네번째 x 고정 y --
	//형식으로 Arr[y][x]에 대입한다 


	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", Arr[i][j]);
		}
		printf("\n");
	}

	
}*/