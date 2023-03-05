//
// Created by junhy on 2023-03-04.
//

//아니 나누는건 어느 타이밍에 해도 상관없이 같은 값을 도출하는건가 ?
//잘 모르겠네

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int n;
    scanf("%d" ,&n);
    long long q[10000] = {0,};

    q[1] = 1;
    q[2] =2;
    for(int i = 3; i<=1000; i++){
        q[i] = q[i-1] + q[i-2];
        q[i] = q[i] % 10007;
    }


    printf("%lld",q[n]);


}*/