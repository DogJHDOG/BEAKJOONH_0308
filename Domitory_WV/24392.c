//
// Created by junhy on 2023-03-10.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[1000][1000] = {0,};
int max[1000][1000] = {0,};
int check[1000][1000] = {0,};
int dx[3] = {-1,0,1};
int N,M;
int count = 0;

int DFS(int x,int y) {




    for(int i = 0 ;i<3;i++) {
        if ((x + dx[i]) >= 0 && (x + dx[i]) < N) {
            if (Arr[y + 1][x + dx[i]] == 1) {
                if (max[y + 1][x + dx[i]] == 0) {
                    if (y + 1 == (N - 1)) {
                        check[y][x] += 1;
                        count++;
                    } else {
                        max[y + 1][x + dx[i]] = 1;
                        DFS(x + dx[i], y + 1);
                        check[y][x] += check[y+1][x+dx[i]];
                        check[y][x] = check[y][x] % 1000000007;
                    }
                } else {
                        check[y][x] += check[y + 1][x + dx[i]];
                        check[y][x] = check[y][x] % 1000000007;
                        count += check[y][x];
                        count = count % 1000000007;
                }
            }
        }
    }


}

int main(){

    scanf("%d %d",&N,&M);

    for(int i = N-1; i>=0; i--){
        for(int j = 0; j<M; j++){
            scanf("%d",&Arr[i][j]);
        }
    }

    for(int i = 0 ;i<M; i++){
        if(Arr[0][i]>=1){
            DFS(i,0);
        }
    }



    printf("%d",count);

}

*/