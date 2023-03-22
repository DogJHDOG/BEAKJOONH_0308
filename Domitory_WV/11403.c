//
// Created by junhy on 2023-03-22.
//

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[105][105] ={0,};
int check[105][105] = {0,};
int q[10001] = {0,};
int head = 0;
int tail = 0;
int N;

int BFS(){

    while(head < tail){
        for(int i=1; i<=N; i++){
            if(Arr[q[head]][i]==1&&check[q[head]][i]==0){
                Arr[i][i] = 1;
                q[tail++] = i;
                check[q[head]][i] = 1;

            }
        }
        head ++;
    }

}

int main() {

    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int k =0;
            scanf("%d", &k);
            if(k==1){
                Arr[i][j] = 1;
                Arr[j][i] = 1;
            }
        }
    }

    q[head] = 1;
    tail ++;
    BFS();

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }

}*/