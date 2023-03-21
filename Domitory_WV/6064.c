//
// Created by junhy on 2023-03-21.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int T;
    scanf("%d",&T);

    for(int i = 0; i<T; i++) {

        int M, N, x, y;
        scanf("%d %d %d %d", &M, &N, &x, &y);
        int cnt = -1;


        int temp;
        int max;

        if(M==x) x = 0;
        if(N==y) y = 0;

        if (M > N) {
            max = M;
            temp = x;
            if(temp == 0) temp = M;
        } else {
            max = N;
            temp = y;
            if(temp == 0) temp = N;

        }

        long long lcm;

        int gcd;
        for (int i = 1; i <= N && i <= M; ++i) {

            if (N % i == 0 && M % i == 0)
                gcd = i;
        }

        lcm = (N * M) / gcd;

        while (1) {


            if (temp % M == x && temp % N == y) {
                if(temp ==0) temp ++;
                cnt = temp;
                break;
            } else {
                temp = temp + max;
                if (temp > lcm) break;
            }

        }

        printf("%d\n", cnt);


    }

}*/