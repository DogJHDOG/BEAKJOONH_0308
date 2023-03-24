//
// Created by junhy on 2023-03-24.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[64] = {0,};
int max = 0;
int main(){


    int n = 64;
    int X;
    scanf("%d",&X);
    int temp = 0;

    while(1){


        if((max+n)<=X){
            Arr[temp] = n;
            temp ++;
            max += n;
             n = n*2;
        }
        if(max==X) break;

        n = n / 2;

    }

    printf("%d",temp);


}*/
