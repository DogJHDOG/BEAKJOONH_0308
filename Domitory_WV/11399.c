
//qsort�� �迭 �����Ҷ�, ���ϴ� ��ü���� ũ��� sizeof(�ش��ڷ���)�� ������ �����ϴ� ���� �ٶ����غ���


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int compare(const void* a, const void* b)    // �������� �� �Լ� ����
{
	int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

	if (num1 < num2)    // a�� b���� ���� ����
		return -1;      // -1 ��ȯ

	if (num1 > num2)    // a�� b���� Ŭ ����
		return 1;       // 1 ��ȯ

	return 0;    // a�� b�� ���� ���� 0 ��ȯ
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