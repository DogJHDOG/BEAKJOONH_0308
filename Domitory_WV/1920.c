/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <stdlib.h>
int Arr[100001] = { 0, };


int compare(const void* a, const void* b)
{
    if (*(int*)a > *(int*)b)
        return 1;
    else if (*(int*)a < *(int*)b)
        return -1;
    else
        return 0;
}

void binary_search(int left, int right,int value) {


    if ( left > right) {
        printf("%d\n", 0);
    }
    else {
        int mid = (left + right) / 2;

        if (Arr[mid] > value) {
            right = mid-1;
            binary_search( left, right, value);
        }
        else if (Arr[mid] < value) {
            left = mid + 1;
            binary_search( left, right, value);
        }
        else if (Arr[mid] == value) {
            printf("%d\n", 1);
        }
    }
}

int main() {

	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &Arr[i]);
	}

    qsort(Arr, N, sizeof(int), compare);

    int k = 0;
    scanf("%d", &k);
    
    int A;
    for (int i = 0; i < k; i++) {
        scanf("%d", &A);
        binary_search(0, N - 1, A);
    }


}
*/