

//merge sort 학습을 위해 해당 코드 확인해보기 
// 02.21 학습 시작 -


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
		// 양쪽 리스트에서 최솟값을 비교했는데 오른쪽 리스트가 더 컸을 경우
		// 그대로 왼쪽 리스트의 최솟값이 결과배열에 내려오면 됩니다.
		else {
			result[k++] = box[i++];
		}
	}

	// 오른쪽 리스트에 아직 결과배열에 들어가지 못한 값이 있으면 그대로 넣어줍니다.
	if (i > mid) {
		while (j <= right) {
			result[k++] = box[j++];
		}
	}
	else { // 그림의 (6)번 과정
		while (i <= mid) {
			result[k++] = box[i++];
		}
	}

	// 다시 원래 배열에 옮겨담는 작업
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
			// 양쪽 리스트에서 최솟값을 비교했는데 오른쪽 리스트가 더 컸을 경우
			// 그대로 왼쪽 리스트의 최솟값이 결과배열에 내려오면 됩니다.
			else {
				result[k++] = box[i++];
			}
		}
		else {
			result[k++] = box[i++];
		}
	}

	// 오른쪽 리스트에 아직 결과배열에 들어가지 못한 값이 있으면 그대로 넣어줍니다.
	if (i > mid) {
		while (j <= right) {
			result[k++] = box[j++];
		}
	}
	else { // 그림의 (6)번 과정
		while (i <= mid) {
			result[k++] = box[i++];
		}
	}

	// 다시 원래 배열에 옮겨담는 작업
	for (int a = left; a <= right; a++) {
		box[a] = result[a];
	}
}

void partition(int left, int right) {
	int mid;
	// 두개로 분할하고, 병합하는 과정
	// 병합 함수 merges를 보면 알 수 있듯이, while문 등으로 정렬하면서 병합하게 된다.
	if (left < right) {
		mid = (left + right) / 2;
		partition(left, mid);
		partition(mid + 1, right);
		merges(left, right);
	}
}

void ypartition(int left, int right) {
	int mid;
	// 두개로 분할하고, 병합하는 과정
	// 병합 함수 merges를 보면 알 수 있듯이, while문 등으로 정렬하면서 병합하게 된다.
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