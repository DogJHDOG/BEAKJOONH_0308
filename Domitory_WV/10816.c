
//������ ���� 
//�ٸ� ������� �ڵ� Ȯ�� �ϰ� ����
//�̺� Ž���� �ؽÿ� ���� �н��� ���ؼ�..

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