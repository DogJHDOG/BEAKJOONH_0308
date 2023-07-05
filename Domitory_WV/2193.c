//
// Created by junhy on 2023-03-08.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

long long Arr[100] = {0,};

int main(){


    int N;
    scanf("%d",&N);
    Arr[0] = 1;
    Arr[1] = 1;

    for(int i = 2; i<N; i++){
        Arr[i] = Arr[i-1] + Arr[i-2];
    }

    printf("%llu",Arr[N-1]);

}*/