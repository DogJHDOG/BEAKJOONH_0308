//
// Created by junhy on 2023-03-13.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[101][101] = {0,};
int check[101] = {0,};
int q[10001] = {0,};

int N;
int X, Y;
int M;
int k = 10000;
int DFS(int x,int depth){

    if(x == Y) {
        if(k>depth)
        k = depth;
    }
    else {

        for (int i = 1; i <= N; i++) {
            if (Arr[x][i] == 1 && check[i] == 0) {
                check[i] = 1;
                DFS(i, depth + 1);
            }
        }
    }

}

int main(){



    scanf("%d",&N);
    scanf("%d %d",&X,&Y);
    scanf("%d",&M);

    for(int i = 0 ; i<M; i++){
        int x,y;
        scanf("%d %d",&x,&y);
        Arr[x][y] = 1;
        Arr[y][x] = 1;
    }
    DFS(X,0);
    if(k==10000) printf("-1");
    else printf("%d",k);


}*/