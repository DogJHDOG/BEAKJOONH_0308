
//다시 확인 필요
//집합과 맵
//해시 부분 학습 필요

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char Arr[100005][25] = { 0, };

int map[2500][100005] = {0,};


int main() {

	int M, N;
	scanf("%d %d", &N, &M);

	for (int i = 1; i <= N; i++) {
		scanf("%s", &Arr[i]);
		int hash = 0;
		for (int j = 0; j < strlen(Arr[i]); j++) {
			hash += Arr[i][j];
		}
		printf("%d", hash);
		map[hash][i] = 1;
	}

	for (int i = 1; i <= M; i++) {
		char temp[30] = { 0, };
		scanf("%s", temp);
		
		if ((temp[0] >= '1') && (temp[0] <= '9')) {
			int check = atoi(temp);
			printf("%s\n", Arr[check]);
		}

		else {
			int check = 0;
			for (int j = 0; j < strlen(temp); j++) {
				check += temp[j];
			}
			for (int k = 1; k < 100005; k++) {
				if (map[check][k] == 1) {
					if (strcmp(Arr[k], temp) == 0) {
						printf("%d\n", k);
					}
				}
			}
		}
	}

}*/