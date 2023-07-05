//
// Created by junhy on 2023-03-28.
//

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(){
//
//    int N,M;
//    scanf("%d %d",&N,&M);
//
//    if(N/2<M){
//        M = N-M;
//    }
//
//    long long max = 1;
//    long long min = 1;
//    for(int i = 1; i<=M; i++){
//        max *= (N-i+1);
//        min *= i;
//        if(max%min==0){
//            max = max/min;
//            min =1;
//        }
//    }
//
//    printf("%llu",max/min);
//
//
//}
