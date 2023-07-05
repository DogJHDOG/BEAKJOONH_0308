//
// Created by junhy on 2023-03-16.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[104][2] = {0,};

int main(){

    int T;
    int n;
    scanf("%d",&T);

    for(int i = 0 ;i<T; i++){
        scanf("%d",&n);
        int k = 0;
        for(int j=0; j<=n+1; j++) {
            scanf("%d %d",&Arr[j][0],&Arr[j][1]);
        }

        for(int j =0; j<=n; j++){
            if(((Arr[j+1][1]+Arr[j+1][0])-(Arr[j][1]+Arr[j][0]))>1000){
                k = 1;
                printf("sad\n");
                break;
            }
        }
        if(k==0)printf("happy\n");
    }


}*/