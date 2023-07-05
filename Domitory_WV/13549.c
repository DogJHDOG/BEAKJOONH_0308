//
// Created by junhy on 2023-04-01.
//

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int q[100005][2] = {0,};
//int check[100005] = {0,};
//int N,K;
//int max = 100005;
//
//int DFS(int i){
//
//    int head =0;
//    int tail = 0;
//    q[head][0] = i;
//    q[head][1] = 0;
//    tail ++;
//
//    while(head<tail){
//
//        if(q[head][0]==K){
//            if(q[head][1]<max) {
//                max = q[head][1];
//            }
//        }
//
//
//        if(q[head][0]*2<100001&&check[q[head][0]*2]==0){
//            check[q[head][0]*2] = 1;
//            q[tail][0] = q[head][0]*2;
//            q[tail][1] = q[head][1];
//            tail ++;
//        }
//
//
//        if((q[head][0]-1)>=0&&check[q[head][0]-1]==0){
//            check[q[head][0]-1] = 1;
//            q[tail][0] = q[head][0]-1;
//            q[tail][1] = q[head][1] +1;
//            tail ++;
//        }
//
//        if((q[head][0]+1)<100001&&check[q[head][0]+1]==0){
//            check[q[head][0]+1] = 1;
//            q[tail][0] = q[head][0]+1;
//            q[tail][1] = q[head][1] +1;
//            tail ++;
//        }
//
//        head ++;
//
//    }
//
//
//}
//
//int main(){
//
//    scanf("%d %d",&N,&K);
//
//
//    if(N<K){
//        DFS(N);
//        printf("%d",max);
//    }
//    else{
//        max = N-K;
//        printf("%d",max);
//    }
//
//
//}