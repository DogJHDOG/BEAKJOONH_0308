////
//// Created by junhy on 2023-07-23.
////
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int Arr[10] = {0,};
//int temp[10] = {0,};
//int max[10] = {0,};
//
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
//int main(){
//
//    int N,M;
//    scanf("%d %d",&N,&M);
//
//    for(int i =0; i<N; i++){
//        scanf("%d",&temp[i]);
//    }
//    qsort(temp, N, sizeof(int), compare);
//
//    int l = 0;
//
//    for(int i =1; i<=N; i++){
//        if(temp[i]!=temp[i-1]){
//            Arr[l++] = temp[i-1];
//        }
//    }
//
//
//
//
//    int depth =0;
//
//    while(1){
//        for(int i =0; i<M; i++){
//            printf("%d ", Arr[max[i]]);
//        }
//        printf("\n");
//        max[M-1]++;
//        int tt = 0;
//        if(max[M-1]==(l)){
//            for(int i = (M-1); i>=0; i--){
//                if(max[i]==(l)){
//                    if(i==0) return 0;
//                    else{
//                        max[i-1]++;
//                        tt = i-1;
//                    }
//                }
//            }
//            for(int i = tt; i<M; i++){
//                max[i] = max[tt];
//            }
//        }
//    }
//
//
//
//}
