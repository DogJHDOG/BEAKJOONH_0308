/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Arr[20000] = { 0, };

int main() {

    
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int K;
        scanf("%d", &K);
        Arr[K] += 1;
    }


    for (int i = 0; i < 10001; i++) {

        if (Arr[i] != 0) {
            for (int j = 0; j < Arr[i]; j++) {
                printf("%d\n", i);
            }
        }

    }

}*/