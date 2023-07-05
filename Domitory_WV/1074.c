//
// Created by junhy on 2023-03-06.
//

//왜 맞았는지 모르겠음
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    int check[1000] = {0,};

    int N,R,C;
    scanf("%d",&N);

    scanf("%d %d",&R,&C);

    int k = 1;
    for(int i = 0 ; i<N; i++){
        k = k *2;
    }
    int click_x =0;
    int click_y = 0;

    int x = 0;
    int y = 0;

    while(1){

        if((k == 0)&&(k == 0)) break;

        if((R / k) != 0){
            x = k;
            click_x += x*x*2;
            R = R % k;
        }
        if((C/k) != 0){
            y = k;
            click_y += y * y;
            C = C % k;
        }
        k =  k/ 2;

    }

    printf("%d",click_x + click_y);




}*/