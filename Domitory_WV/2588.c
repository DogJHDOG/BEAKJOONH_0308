//
// Created by junhy on 2023-03-08.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int N, M;
    int check = 0;
    int temp = 100;
    int Arr[3] = {0,};
    scanf("%d %d",&N,&M);
    for(int i = 0; i<3; i++){
        Arr[i] = M / temp;
        M = M - (Arr[i] * temp);
        temp = temp / 10;
    }
    temp = 1;
    for(int i = 2; i>=0; i--){
        check += Arr[i] * N*temp;
        temp = temp * 10;
        printf("%d\n",Arr[i]*N);
    }
    printf("%d",check);

}*/