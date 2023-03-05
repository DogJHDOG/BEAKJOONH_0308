//
// Created by junhy on 2023-03-05.
//

//1차시도 = 시간초과

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[1000000] = {0,};
int temp[1000000] = {0,};
int check[100000] = {0,};

int main(){


    int T;
    scanf("%d",&T);

    for(int i = 0 ; i<T; i++){
        scanf("%d",&Arr[i]);
        temp[i] = Arr[i];
    }

    int mint = 0;
    for(int i = 0;i<T; i++){
        int min = 100000001;
        for(int j = 0 ; j<T; j++){

            if(min>Arr[j]){
                min = Arr[j];
                mint = j;
            }
        }
        check[i] = mint;
        Arr[mint] = 100000001;
    }
    int j = 0;


    Arr[check[0]] = 0;
    for(int i = 0;i<T-1; i++){

        if(temp[check[i]]==temp[check[i+1]]){
            Arr[check[i+1]] = j;
        }
        else{
            j++;
            Arr[check[i+1]] = j;
        }

    }

    for(int i = 0 ; i<T; i++){
        printf("%d ",Arr[i]);
    }



}