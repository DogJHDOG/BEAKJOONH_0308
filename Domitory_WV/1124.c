//
// Created by junhy on 2023-03-07.
//

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[100000] = {0,};
int check[100000] = {0,};
int main(){
    int head = 0;
    for(int i = 2; i<100000; i++){
        if(Arr[i]==0) {
            check[head++] = i;
            for (int j = i; j < 100000; j += i) {
                Arr[j] = 1;
            }
        }
    }
    int A,B;
    int temp;
    int click = 0;
    scanf("%d %d",&A,&B);
    for(int j = A; j<=B; j++) {
        int k = j;
        temp =  0;
        for (int i = 0; i < head; i++) {
            int l = check[i];
            if((k ==1)||(k<l)) break;
            while((k % l)==0){
                k = k / l;
                temp ++;
            }
        }
        for(int i = 0; i<head; i++){
            if(temp<check[i]) break;
            if(temp==check[i]) {
                click ++;
                break;
            }

            }
        }
    printf("%d",click);

}
*/