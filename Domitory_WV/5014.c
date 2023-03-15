//
// Created by junhy on 2023-03-14.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check[1000001] ={0,};
int F,S,G,U,D;
int dx[2] ={0,};
int max= 1000001;
//F가 전체 층수 1층 to F층까지
//S가 현재 위치
//G가 가야하는 위치
//U가 위로 이동 수
//D가 아래로 이동수

//아래로 이동해야 할때 S>G일때

//1.아래로 이동이 가능하다면 아래로 이동한다
//2.아래도 이동이 불가능하다면 depth를 한단계 나추머 위로 이동한다
//1번과 2번이 진행되기 전에 해당 위치가 이전에 방문하였던 위치인지 확인한다
//방문하였던 위치가 아닐때만 for문을 진행한다
//만약 같은 G와 같은 위치에 도달하였다면 멈춘다

int DFS(int x,int depth){


    if(x==G) {
        if (max>depth){
            max = depth;
        }
    }

    else {
        for (int i = 0; i < 2; i++) {

            if (x + dx[i] >= G - U && x + dx[i] >= 1 && x + dx[i] <= F && x + dx[i] <= S + D && check[x + dx[i]] == 0) {
                check[x + dx[i]] = 1;
                DFS(x + dx[i], depth + 1);

            } else if (x + dx[i] >= G - U && x + dx[i] >= 1 && x + dx[i] <= S + D && x + dx[i] <= F && check[x + dx[i]] == 1) {
                break;
            }
        }
    }

}

int main(){


    scanf("%d %d %d %d %d",&F,&S,&G,&U,&D);

    int k;

    if(S>G){
        dx[0] = -D;
        dx[1] = U;
        int temp = S - G;
        if(D!=0)
        temp = temp / D;
        k = DFS(S - temp*D,temp);
    }
    else{
        dx[0] = -U;
        dx[1] = D;
        int rng = G;
        G = S;
        S = rng;
        int temp = S - G;
        if(U!=0)
        temp = temp / U;
        k = DFS(S - (temp*U),temp);
    }

    if(max == 1000001) printf("use the stairs");
    else printf("%d",max);

}*/