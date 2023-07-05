//
// Created by junhy on 2023-03-04.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int q[1000001] = {0,};
int check[100001] = {0,};
int max[1000001] ={0,};

int head = 0;
int tail = 0;

int main(){

    int N,M;
    scanf("%d %d",&N,&M);
    q[head] = N;
    check[q[head]] = 1;
    tail++;
    int large = 0;
    int msize = 0;
    while(head < tail){


        if(q[head]==M) {
            large = max[head];
            msize = head;
            for(int i = head+1; i<tail; i++){
                if(q[i]==M){
                    if(max[i]<large){
                        large = max[i];
                        msize = i;
                    }
                }
            }
            break;
        }
       if((q[head]*2)<=100000){
           if(check[q[head]*2]==0){
                q[tail] = q[head]*2;
                check[q[tail]] = 1;
               max[tail] = max[head] + 1;
               tail++;
           }
       }
       if((q[head]+1)<=100000){
           if(check[q[head]+1]==0){
               q[tail] = q[head] + 1;
               check[q[tail]] = 1;
               max[tail] = max[head] + 1;
               tail++;
           }
       }
       if((q[head]-1)>=0){
           if(check[q[head]-1]==0){
               q[tail] = q[head] - 1 ;
               check[q[tail]] =  1;
               max[tail] = max[head] + 1;
               tail ++;

           }
       }
       head ++;
    }
    printf("%d",max[msize]);
}*/