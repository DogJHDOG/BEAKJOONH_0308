//
// Created by junhy on 2023-08-28.
//

//#define _CRT_SECURE_NO_WARNINGS
//#include "stdio.h"
//
//int Arr[1001][1001] = {0,};
//int dp[1001] = {0,};
//int N,M;
//
//int check(int n){
//
//    int k=0;
//    for(int i=1;i<=N; i++){
//        if(Arr[n][i]==1){
//            if(dp[n]>dp[i]){
//                dp[i] = dp[n];
//            }
//        }
//    }
//    printf("%d ",dp[n]);
//
//}
//
//
//int main(){
//
//    scanf("%d %d",&N,&M);
//    for(int i =0; i<M; i++){
//        int a,b;
//        scanf("%d %d",&a,&b);
//        Arr[a][b]= 1;
//    }
//    for(int i =1;i<=N; i++){
//        dp[i]++;
//        check(i);
//    }
//
//
//
//}