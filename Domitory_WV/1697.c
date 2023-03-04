//
// Created by junhy on 2023-03-04.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int q[300001] = {0,};
int check[100001] = {0,};
int max[300001] ={0,};
int head = 0;
int tail = 0;
int main(){

    int N,M;
    scanf("%d %d",&N,&M);
    q[head] = N;
    check[head] = 1;
    tail++;
    int large;
    int msize;
    while(head<tail){

        if(q[head]==M){
            large = head;
            msize = q[head];
            for(int i = head; i<tail; i++){
                if(max[i]<msize){
                    msize = max[i];
                    large = i;
                }
            }
            break;
        }


       if((q[head]*2)<100000){
           if(check[q[head]*2]==0){
                q[tail] = q[head]*2;
                check[q[tail]] = 1;
               max[tail] = max[head] + 1;
               tail++;
           }
       }
       if((q[head]+1)<100000){
           if(check[q[head]+1]==0){
               q[tail] = q[head] + 1;
               check[q[tail]] = 1;
               max[tail] = max[head] + 1;

               tail++;
           }
       }
       if((q[head]-1)>=0){
           if(check[q[head]-1]==0){
               q[tail] = q[head] -1;
               check[q[tail]] = 1;
               max[tail] = max[head] + 1;
               tail ++;

           }
       }
       head ++;
    }

    printf("%d",max[large]);
}