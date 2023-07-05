//
// Created by junhy on 2023-03-19.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long Arr[1000] = {0,};

int main(){

    int k ;
    scanf("%d",&k);

    Arr[0] = 0;
    Arr[1] = 1;
    for(int i = 2; i<=k; i++){

        Arr[i] = Arr[i-1] + Arr[i-2];

    }

    printf("%lld",Arr[k]);

}*/