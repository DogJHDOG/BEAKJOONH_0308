//
// Created by junhy on 2023-03-08.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int  click = 0;
float temp =0;
int dx[8] = {1,2,2,1,-1,-2,-2,-1};
int dy[8] = {2,1,-1,-2,-2,-1,1,2};

int N,X,Y,K;
int Arr[400][2] = {0,};
int kkk = 1 ;
int head = 0 ;
int tail = 0;
int check(){

    while(head< kkk) {
        if(head != 0) {
            if ((Arr[head][0] <= N) && (Arr[head][0] > 0) && (Arr[head][1] <= N) && (Arr[head][1] > 0)) {
                temp++;
            }
        }
        if(tail<=kkk) {
            for (int j = 0; j < 8; j++) {
                Arr[tail][0] = Arr[head][0] + dx[j];
                Arr[tail++][1] = Arr[head][1] + dy[j];
            }
        }
        head++;
    }

}

int main(){


    scanf("%d %d %d %d",&N,&X,&Y,&K);


    for(int i = 0 ; i<K; i++){
        kkk = kkk * N;
    }

    Arr[head][0] = X;
    Arr[head][1]= Y;
    tail ++;

    check();


    if(K!=0)printf("%.10f",temp/(kkk));
    else printf("1");

}*/