//
// Created by junhy on 2023-03-09.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int integer =0;
    int i = 0;
    int click = 31;

    scanf("%d",&integer);
    if((integer%2)==0) {

        for (i=0; i <= 31; i++) // 2진수가 시작하는 비트 자리 부터 '&'연산으로 2진수 출력
        {
            if (integer&(1 << i))
            {
                break;
            }
            else
            {
                click --;
            }
        }
    }
    printf("%d",click);


}*/