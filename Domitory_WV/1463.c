//
// Created by junhy on 2023-03-04.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int q[3000000] = {0,};
int check[1000000] = {0,};
int max[3000000] = {0,};

int head = 0;
int tail = 0;

int main(){
    int k = 0;
    scanf("%d",&k);

    q[head] = k;
    check[q[head]] = 1;
    tail ++;


    while(head<tail){

        int t = q[head];

        if(t<=1){
            break;
        }

        if((t %3)==0){
            if(check[t/3] == 0) {
                q[tail] = t / 3;
                check[q[tail]] = 1;
                max[tail] = max[head] + 1;
                tail++;
            }
        }
        if((t %2)==0){
            if(check[t/2] == 0) {
                q[tail] = t / 2;
                check[q[tail]] = 1;
                max[tail] = max[head] + 1;
                tail++;
            }
        }
        if((t-1)>0){
            if(check[t-1] == 0) {
                q[tail] = t - 1;
                check[q[tail]] = 1;
                max[tail] = max[head] + 1;
                tail++;
            }
        }
        head ++;

    }

    printf("%d",max[head]);

}
*/