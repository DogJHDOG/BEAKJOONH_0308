//
// Created by junhy on 2023-03-11.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[100][100] = {0,};
int check[100][100] = {0,};
//1은 땅
//2는 바다
int X,Y;

int dx[8] = {-1,0,1,1,1,0,-1,-1};
int dy[8] = {1,1,1,0,-1,-1,-1,0};

int DFS(int x,int y){


    check[y][x] = 1;

    for(int i =0; i<8; i++){

        if((x+dx[i])>=0&&(x+dx[i])<X&&(y+dy[i])>=0&&(y+dy[i])<Y&&Arr[y+dy[i]][x+dx[i]]==1&&(check[y+dy[i]][x+dx[i]]==0)){
            check[y+dy[i]][x+dx[i]] = 1;
           DFS(x+dx[i],y+dy[i]);
        }
    }


}

int main(){


    while(1) {
        scanf("%d %d", &X, &Y);
        int click = 0;
        if(X==0&&Y==0) break;

        for (int i = 0; i < Y; i++) {
            for (int j = 0; j < X; j++) {
                scanf("%d", &Arr[i][j]);
            }
        }

        for (int i = 0; i < Y; i++) {
            for (int j = 0; j < X; j++) {
                if (check[i][j] == 0&&Arr[i][j]==1) {
                    DFS(j, i);
                    click++;
                }
            }
        }

        printf("%d\n", click);

        for (int i = 0; i < Y; i++) {
            for (int j = 0; j < X; j++) check[i][j] = 0;
        }
    }
}*/