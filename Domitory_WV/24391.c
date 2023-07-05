//
// Created by junhy on 2023-03-10.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[100001] = {0,};
int q[100001] = {0,};

int main(){

    int N,M;

    scanf("%d %d",&N,&M);

    for(int i = 0; i<M; i++){
        int k,l;
        scanf("%d %d",&k,&l);
        Arr[k][l] = 1;
        Arr[l][k] = 1;
    }

    int click =N-1;
    int a1,a2;

    scanf("%d",&a1);

    for(int i = 1; i<N; i++){

        scanf("%d",&a2);
        if(Arr[a1][a2] == 1) click --;
        a1 = a2;

    }

    printf("%d",click);

}*/