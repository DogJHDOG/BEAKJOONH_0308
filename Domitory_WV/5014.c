//
// Created by junhy on 2023-03-14.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check[1000001] ={0,};
int F,S,G,U,D;
int dx[3] ={0,};
int max= 1000001;


int DFS(int x,int depth){


    if(x==G) {
        if (max>depth){
            max = depth;
            return 0;
        }
    }

    else {
        for (int i = 0; i < 2; i++) {
            if (x + dx[i] >= G - U && x + dx[i] >= 1 && x + dx[i] <= F && x + dx[i] <= S + D && check[x + dx[i]] == 0) {
                check[x + dx[i]] = 1;
                DFS(x + dx[i], depth + 1);
            }
        }
    }

}

int main(){


    scanf("%d %d %d %d %d",&F,&S,&G,&U,&D);


    if(S>G){
        dx[0] = -D;
        dx[1] = U;
        int temp = S - G;
        if(D!=0)
        temp = temp / D;
        check[S-(temp)*D] = 1;
        for(int i =0; i<temp; i++){
            check[S-i*D] =1;
        }
        DFS(S - temp*D,temp);
    }
    else{
        //G>S 일때
        //G 와 S 의 위치를 변경함
        //G와 S의 위치를 변경한 이후 U와 D 의 부호를 변경함

        dx[0] = -U;
        dx[1] = D;
        int rng = G;
        G = S;
        S = rng;
        int temp = S - G;
        if(U!=0)
        temp = temp / U;
        for(int i =0; i<temp; i++){
            check[S-i*U] =1;
        }
        check[S-(temp)*U] = 1;
        DFS(S - (temp*U),temp);
    }

    if(max == 1000001) printf("use the stairs");
    else printf("%d",max);

}