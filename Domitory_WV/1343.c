//
// Created by junhy on 2023-03-24.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int Arr[50][50] = {0,};
char temp[50] = {0,};

int main(){

    scanf("%s",&temp);

    int check = 0;
    int dot = 0;

    for(int i = 0; i<strlen(temp); i++){
        if(temp[i]=='.'){
            if(check % 2 != 0){
                Arr[0][0] = -1;
                break;
            }
            else{
                int j = 0;
                for(j =0; j<check/4; j++){
                    Arr[dot][j] = 1;
                }
                check = check -j*4;
                for(int k = 0; k<check/2; k++){
                    Arr[dot][j+k] = 2;
                }
            }
            dot ++;
            check = 0;
        }
        else if(temp[i]=='X'){
            check ++;
        }
    }

    if(check % 2 != 0){
        Arr[0][0] = -1;
    }
    else{
        int j = 0;
        for(j =0; j<check/4; j++){
            Arr[dot][j] = 1;
        }
        check = check -j*4;
        for(int k = 0; k<check/2; k++){
            Arr[dot][j+k] = 2;

        }
    }

    dot ++;
    check = 0;


    if(Arr[0][0] == -1) printf("%d",-1);

    else{
        for(int i = 0; i< dot; i++){
            for(int j =0; j<50; j++){
                if(Arr[i][j]==0){
                    if(i != dot-1)printf(".");
                    break;
                }
                else if(Arr[i][j]==1){
                    printf("AAAA");
                }
                else{
                    printf("BB");
                }
            }
        }
    }


}*/