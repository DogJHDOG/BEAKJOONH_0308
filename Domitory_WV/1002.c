//
// Created by junhy on 2023-03-09.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(){


    int T;

    int rng = 0;

    scanf("%d",&T);

    for(int i=0;i<T; i++){

        int x1;
        int x2;
        int y1;
        int y2;
        int r1;
        int r2;


        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);

        int rngx= x1 -x2;
        int rngy = y1 - y2;
        int min = r2;
        if(r1<r2) min = r1;
        rngx = rngx * rngx;
        rngy = rngy * rngy;

        rngx = rngx + rngy;

        double arg = sqrt(rngx);
//        printf("%f\n",arg);

        if(r1==r2){
            if((x1==x2)&&(y1==y2)) {
                printf("-1\n");
            }
            else if((arg/2)<r1){
                printf("2\n");
            }
            else printf("0\n");
        }
        else{
            double temp = pow(r1+r2,2);
            if(rngx ==temp){
                printf("1\n");
            }
            else if(rngx > temp){
                printf("0\n");
            }
            else{
                int k = 0;
                k = pow(arg+min,2);
                if(k==temp) printf("1\n");
                else if(k<temp) printf("0\n");
                else printf("2\n");
            }

        }


    }



}*/