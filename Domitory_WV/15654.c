////
//// Created by junhy on 2023-03-29.
////
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//// 오름차순으로 정렬할 때 사용하는 비교함수
//int static compare (const void* first, const void* second)
//{
//    if (*(int*)first > *(int*)second)
//        return 1;
//    else if (*(int*)first < *(int*)second)
//        return -1;
//    else
//        return 0;
//}
//
//int n,m;
//
//int arr[10];
//int num[10];
//int check[10];
//
//void seq(int len){
//    if(len==m){
//        for(int i=0;i<m;i++)
//            printf("%d ",arr[i]);
//        printf("\n");
//        return;
//    }
//
//    for(int i=0;i<n;i++){
//        if(check[i]==0){
//            arr[len] = num[i];
//            check[i] = 1;
//            seq(len+1);
//            check[i] = 0;
//        }
//    }
//
//    return;
//}
//
//int main(){
//    scanf("%d %d",&n,&m);
//
//    for(int i=0;i<n;i++)
//        scanf("%d",&num[i]);
//
//    qsort(num,n,sizeof(int),compare);
//
//    seq(0);
//
//    return 0;
//}
