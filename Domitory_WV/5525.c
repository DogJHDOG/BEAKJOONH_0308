//
// Created by junhy on 2023-03-21.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[1000000] = {0,};
int check[2] = {0,1};

int cnt = 0;
int temp;
int N,M;
int i;

int last(){
    if(i+1<M){
        if(Arr[i]==check[0]&&Arr[i+1]==check[1]){
            cnt++;
            i = i + 2;
            last();
        }
    }
}


int next(){

    int k = 0;
    int t = 0;
    int j = i;
    for(i=i;i<j+temp; i++){
        if(i==M) {
            k = 1;
            break;
        }
        if(Arr[i]!=check[t%2]){
            k=1;
            break;
        }
        t++;
    }

    if(k==0){
        cnt++;
        last();
    }

}


int main(){

    scanf("%d",&N);

    temp = N -1;
    temp = temp * 2;

    scanf("%d",&M);
    getchar();

    for(int i =0 ;i <M; i++){
        char k;
        k = getchar();
        if(k=='I'){
            Arr[i] = 1;
        }
        else{
            Arr[i] = 0;
        }
    }


    for(i =0; i<M; i++){
        if((i+2)<M&&Arr[i]==1&&Arr[i+1]==0&&Arr[i+2]==1){
            i = i +3;
            next();
            i--;
        }
    }

    printf("%d",cnt);


}*/