//
// Created by junhy on 2023-03-22.
//

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[105][105] ={0,};
int q[100001] = {0,};
int check[105][105] = {0,};
int N;
int head = 0;
//q[1]애 하나
//q[2]에 하나
//이후 해당 좌표에 1이 있다면 전부 1
//방향 존재


int DFS(int k){

    for(int i =1;i<=N; i++  ){
        if(Arr[k][i]==1&&check[q[head]][i]==0){
            Arr[q[head]][i] = 1;
            check[q[head]][i] = 1;
            DFS(i);
        }
    }

}



int main() {

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            scanf("%d", &Arr[i][j]);
        }
    }

    for(int i =1; i<=N; i++) {
        q[head] = i;
        DFS(i);
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }

}*