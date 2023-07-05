////
//// Created by junhy on 2023-07-05.
////
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int num[100000] = { 0,};
//int add[100000] = {0,};
//
//int main(){
//
//    int N,M;
//    scanf("%d %d",&N,&M);
//
//    for(int i =0; i<N; i++){
//        scanf("%d",&num[i]);
//        if(i!=0) add[i] = add[i-1] + num[i];
//        else add[i] = num[i];
//    }
//
//
//    for(int k =0; k<M;k++){
//        int i,j;
//        scanf("%d %d",&i,&j);
//        printf("%d\n", add[j-1]-add[i-1]+num[i-1]);
//    }
//
//}
