//
// Created by junhy on 2023-03-07.
//

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N,K,M;

int ari(int N, int K){
    if((K==0)||(N==K)) {
        printf("\n::%d %d\n", N, K);
        return 1;
    }
    else {
        printf("%d %d\n", N, K);
        return (ari(N - 1, K - 1) + ari(N - 1, K)) % M;
    }
}

int main(){

    scanf("%d %d %d",&N,&K,&M);
    if(K > N/2) K = N - K;
    int k = ari(N,K);
    printf("%d",k%M);
    return 0;

}*/