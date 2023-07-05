/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct t_list {
	char word[100];
	int len;
}w_list;

w_list box[100001];
w_list result[100001];

void merges(int left, int right) {
	int mid = (left + right) / 2;
	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right) {
		if (box[i].len > box[j].len){
			result[k++] = box[j++];
		}
		// ���� ����Ʈ���� �ּڰ��� ���ߴµ� ������ ����Ʈ�� �� ���� ���
		// �״�� ���� ����Ʈ�� �ּڰ��� ����迭�� �������� �˴ϴ�.
		else {
			result[k++] = box[i++];
		}
	}

	// ������ ����Ʈ�� ���� ����迭�� ���� ���� ���� ������ �״�� �־��ݴϴ�.
	if (i > mid) {
		while (j <= right) {
			result[k++] = box[j++];
		}
	}
	else { // �׸��� (6)�� ����
		while (i <= mid) {
			result[k++] = box[i++];
		}
	}

	// �ٽ� ���� �迭�� �Űܴ�� �۾�
	for (int a = left; a <= right; a++) {
		box[a] = result[a];
	}
}

void ymerges(int left, int right) {
	int mid = (left + right) / 2;
	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right) {
		if (box[i].len == box[j].len) {
			if ((strcmp(box[i].word, box[j].word)) > 0) {
				result[k++] = box[j++];
			}
			else {
				result[k++] = box[i++];
			}
		}
		else {
			result[k++] = box[i++];
		}
	}

	if (i > mid) {
		while (j <= right) {
			result[k++] = box[j++];
		}
	}
	else {
		while (i <= mid) {
			result[k++] = box[i++];
		}
	}

	for (int a = left; a <= right; a++) {
		box[a] = result[a];
	}
}

void partition(int left, int right) {
	int mid;
	// �ΰ��� �����ϰ�, �����ϴ� ����
	// ���� �Լ� merges�� ���� �� �� �ֵ���, while�� ������ �����ϸ鼭 �����ϰ� �ȴ�.
	if (left < right) {
		mid = (left + right) / 2;
		partition(left, mid);
		partition(mid + 1, right);
		merges(left, right);
	}
}

void ypartition(int left, int right) {
	int mid;
	// �ΰ��� �����ϰ�, �����ϴ� ����
	// ���� �Լ� merges�� ���� �� �� �ֵ���, while�� ������ �����ϸ鼭 �����ϰ� �ȴ�.
	if (left < right) {
		mid = (left + right) / 2;
		ypartition(left, mid);
		ypartition(mid + 1, right);
		ymerges(left, right);
	}
}

int main() {

	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", box[i].word);
		box[i].len = strlen(box[i].word);
	}


	partition(0, N - 1);
	ypartition(0, N - 1);


	printf("%s\n", box[0].word);
	for (int i = 1; i < N; i++) {
		if ((strcmp(box[i].word, box[i - 1].word)) != 0) {
			printf("%s\n", box[i].word);
		}
	}


}*/