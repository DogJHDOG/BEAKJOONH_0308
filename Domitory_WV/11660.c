//
// Created by junhy on 2023-03-26.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[1030][1030] = {0,};
int max[1030][1030] = {0,};

int add(int x1,int y1, int x2, int y2){

    int temp = 0;
    for(int i = y1; i<=y2; i++){
        temp += max[i][x2]-max[i][x1-1];
    }

    printf("%d\n",temp);



}

int main(){

    int N,M;

    scanf("%d %d",&N,&M);

    for(int i =1; i<=N; i++){
        int maxt = 0;
        for(int j =1; j<=N; j++){

            scanf("%d",&Arr[i][j]);
            maxt += Arr[i][j];
            max[i][j] = maxt;
        }
    }

    for(int i = 0; i<M; i++){
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        add(y1,x1,y2,x2);
    }

}*/