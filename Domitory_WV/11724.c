//
// Created by junhy on 2023-03-06.
//

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[1001][1001] = {0,};
int check[1001] = {0,};
int N,M;

int c(int i){
    if(check[i] ==0){
        check[i] = 1;
        for(int j=1; j<=N;j++){
            if(Arr[i][j]==1){
                if(check[j] ==0) c(j);
            }
        }
    }
}

int main(){


    scanf("%d %d",&N,&M);

    for(int i = 0; i<M; i++){
        int d,r;
        scanf("%d %d",&d,&r);
        Arr[d][r] = 1;
        Arr[r][d] = 1;
    }

    int click =0;

    for(int i = 1 ; i<=N; i++){
        if(check[i] == 0){
            c(i);
            click++;
        }
    }

    printf("%d",click);

}*/