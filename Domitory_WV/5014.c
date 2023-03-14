//
// Created by junhy on 2023-03-14.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check[1000000] ={0,};
int F,S,G,U,D;
int dx[2] ={0,};
int DFS(int x,int depth){

    if(x==G){
        return depth;
    }
    else if(x<G){
        if(x+dx[0]>=1&&x+dx[0]<=1000000){
            if(check[x+dx[0]]==0){
                DFS(x+dx[0],depth+1);
            }
            else{
                return 0;
            }
        }
        else if(x+dx[1]>=1&&x+dx[1]<=1000000) {
            if(check[x+dx[1]]==0){
                DFS(x+dx[1],depth+1);
            }
            else{
                return 0;
            }
        }
        else return 0;

    }
    else if(x>G){
        if(x+dx[1]>=1&&x+dx[1]<=1000000){
            if(check[x+dx[1]]==0){
                DFS(x+dx[1],depth+1);
            }
            else{
                return 0;
            }
        }
        else if(x+dx[0]>=1&&x+dx[0]<=1000000) {
            if(check[x+dx[0]]==0){
                DFS(x+dx[0],depth+1);
            }
            else{
                return 0;
            }        }
        else return 0;
    }
}






int DFS2(int x,int depth){


    if(x==G){
        return depth;
    }
        else if(x>G){
            if(x+dx[0]>=1&&x+dx[0]<=1000000){
                if(check[x+dx[0]]==0){
                    DFS(x+dx[0],depth+1);
                }
                else{
                    return 0;
                }
            }
            else if(x+dx[1]>=1&&x+dx[1]<=1000000) {
                DFS(x+dx[1],depth+1);

            }
            else return 0;
        }
        else if(x<G){
            if(x+dx[1]>=1&&x+dx[1]<=1000000){
                if(check[x+dx[1]]==0){
                    DFS(x+dx[1],depth+1);
                }
                else{
                    return 0;
                }
            }
            else if(x+dx[0]>=1&&x+dx[0]<=1000000) {
                DFS(x + dx[0], depth + 1);
            }
            else return 0;
    }
}





int main(){


    scanf("%d %d %d %d %d",&F,&S,&G,&U,&D);

    int dir = G-S;
    int dfs;
    if(dir>0){
        dx[0] = U;
        dx[1] = -D;
        dir = dir/ U;
        dfs = DFS(S + dir * U,dir);

    }
    else if(dir<0){
        dx[0] = U;
        dx[1] = -D;
        dir = dir / D;

        dfs = DFS2(S-dir*D,dir);

    }
    else{
        printf("0");
        return 0;
    }

    if(dfs!=0){
        printf("%d",dfs);
    }
    else{
        printf("use the stairs");
    }

}