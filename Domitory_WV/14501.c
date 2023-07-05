//
// Created by junhy on 2023-03-08.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[20][2] = {0,};
int q[20000] = {0,};
int max[20000] = {0,};
int head = 0;
int tail = 0;
int T;
int most = 0;

void BFS(int n){


    head = 0;
    tail = 0;
    if(Arr[n][0] != -10) {
        q[head] = n;
        max[head] = Arr[n][1];
        tail++;

        while (head < tail) {

            for (int i = Arr[q[head]][0] + q[head]; i < T; i++) {
                if ((Arr[i][0] != -10) && (Arr[i][0] + i) <= T) {
                    q[tail] = i;
                    max[tail] = max[head] + Arr[i][1];
                    tail++;
                }
            }
            head++;
        }

        for (int i = 0; i < tail; i++) {
            if (most < max[i]) {
                most = max[i];
            }
        }


    }

}

int main(){

    scanf("%d",&T);

    for(int i = 0 ; i<T; i++){

        int t,p;
        scanf("%d %d",&t,&p);
        Arr[i][0] = t;
        Arr[i][1] = p;

    }

    for(int i =T-1; i>=0; i--){

        if((Arr[i][0]+i)>T){
            Arr[i][0] = -10;
            Arr[i][1] = 0;
        }
    }

    for(int i =0; i<T; i++){
        BFS(i);
    }

    printf("%d",most);

}*/