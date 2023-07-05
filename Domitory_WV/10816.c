
//정답은 맞음 
//다른 사람들의 코드 확인 하고 싶음
//이분 탐색과 해시에 대한 학습을 위해서..

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pArr[10000001] = { 0, };
int mArr[10000000] = { 0, };

int main() {

	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int k = 0;
		scanf("%d", &k); 
		if (k < 0) {
			k = -k;
			mArr[k] += 1;
		}
		else {
			pArr[k] += 1;
		}
	}

	int M;
	scanf("%d", &M);

	for (int i = 0; i < M; i++) {
		int l = 0;
		scanf("%d", &l);
		if (l < 0) {
			l = -l;
			printf("%d ",mArr[l]);
		}
		else {
			printf("%d ", pArr[l]);
		}
	}


}*/