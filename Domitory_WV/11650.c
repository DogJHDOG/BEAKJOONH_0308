

//merge sort �н��� ���� �ش� �ڵ� Ȯ���غ��� 
// 02.21 �н� ���� -


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int x;
	int y;
}   t_list;

t_list box[100001];
t_list result[100001];

void merges(int left, int right) {
	int mid = (left + right) / 2;
	int i = left;
	int j = mid + 1;
	int k = left;

	while (i <= mid && j <= right) {
		if (box[i].x > box[j].x) {
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
		if (box[i].x == box[j].x) {
			if (box[i].y > box[j].y) {
				result[k++] = box[j++];
			}
			// ���� ����Ʈ���� �ּڰ��� ���ߴµ� ������ ����Ʈ�� �� ���� ���
			// �״�� ���� ����Ʈ�� �ּڰ��� ����迭�� �������� �˴ϴ�.
			else {
				result[k++] = box[i++];
			}
		}
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


	int n;
	scanf("%d", &n);



	for (int i = 0; i < n; i++) {
		scanf("%d %d", &box[i].x, &box[i].y);
	}
	
	partition(0, n - 1);
	ypartition(0, n - 1);


	for (int i = 0; i < n; i++) {
		printf("%d %d\n", box[i].x, box[i].y);
	}


}*/