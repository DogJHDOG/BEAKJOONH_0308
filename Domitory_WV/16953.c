//
// Created by junhy on 2023-03-26.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long q[10000] = {0,};

int main(){

    long long A,B;
    scanf("%llu %llu",&A,&B);

    int head = 0;
    int tail = 0;

    q[head] = B;
    tail ++;


    while(head<tail){
        if(A==q[head]){
            printf("%d",head+1);
            return 0;
        }
        else if(A<q[head]){
            if(q[head]%2==0){
                q[tail] = q[head]/2;
            }
            else if(q[head]%10==1){
                q[tail] =q[head] / 10;
            }
            tail++;
        }
        head ++;
    }

    printf("-1");


}*/