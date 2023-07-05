


//1회 hash 모방 -> 실패


//qsort 및 이분탐색에 대한 사용으로 3회후 성공


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


char Arr[500000][30] = { 0, };
char last[500000][30] = { 0, };

int tail = 0;

int compare(const void* a, const void* b) {
	return strcmp((char*)a, (char*)b);
}

int main() {

	int N,M;

	scanf("%d %d", &N, &M);



	for (int i = 0; i < N; i++) {
		scanf("%s", &Arr[i]);
		int t = strlen(Arr[i]);

	}

	qsort(Arr, N, sizeof(Arr[0]), compare);

	for (int i = 0; i < N; i++) {
		printf("%s \n", Arr[i]);
	}

	for (int i = 0; i < M; i++) {
		int temp[30] = { 0, };
		
		scanf("%s", &temp);

		int front = 0; 
		int back = N;

			while (front <= back) {
			int mid = (front + back) / 2;
			if (strcmp(temp, Arr[mid]) > 0) {
				front = mid +1;
			}
			else if (strcmp(temp, Arr[mid]) < 0) {
				back = mid-1;
			}
			else if(strcmp(temp,Arr[mid])==0) {
				strcpy(last[tail++], Arr[mid]);
				break;
			}
		}



	}

	printf("%d\n", tail);

	qsort(last, tail, sizeof(last[0]), compare);


	for (int i = 0; i < tail; i++) {
		printf("%s\n", last[i]);
	}


}*/