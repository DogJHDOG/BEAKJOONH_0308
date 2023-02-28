
//qsort로 배열 정리할때, 비교하는 객체들의 크기는 sizeof(해당자료형)의 구조로 진행하는 것이 바람직해보임


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int compare(const void* a, const void* b)    // 오름차순 비교 함수 구현
{
	int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

	if (num1 < num2)    // a가 b보다 작을 때는
		return -1;      // -1 반환

	if (num1 > num2)    // a가 b보다 클 때는
		return 1;       // 1 반환

	return 0;    // a와 b가 같을 때는 0 반환
}

int main() {

	int Arr[1001] = { 0, };

	int N;
	scanf("%d",& N);

	scanf("%d", &Arr[0]);
	for (int i = 1; i < N; i++)
	{
		
		scanf("%d",&Arr[i]);

	}

	qsort(Arr, N, sizeof(int), compare);


	int max = Arr[0];
	
	for (int i = 1; i < N; i++) {
		Arr[i] = Arr[i - 1] + Arr[i];
		max += Arr[i];
	
	}

	printf("%d", max);
}*/