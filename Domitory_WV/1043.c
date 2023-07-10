////
//// Created by junhy on 2023-07-09.
////
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int Arr[60][60] = {0,};
//int check[60]={0,};
//int N,M;
//
//int Queue[10000] = {0,};
//
//int head = 0;
//int tail = 0;
//
//
//int DFS(){
//
//    while(head<tail){
//        for(int i =0; i<M;i++){
//            if(Arr[i][Queue[head]]==1&&Arr[i][0]!=-1){
//                Arr[i][0] = -1;
//                for(int j=0; j<=N; j++){
//                    if(Arr[i][j]==1&&check[j]==0){
//                        Queue[tail++] = j;
//                        check[j] = 1;
//                    }
//                }
//            }
//        }
//        head ++;
//    }
//
//}
//
//
//int main(){
//
//
//    scanf("%d %d",&N,&M);
//    int rt = M;
//    int k;
//    scanf("%d",&k);
//
//    for(int i=0;i <k; i++){
//        int t = 0;
//        scanf("%d",&t);
//        check[t] = 1;
//        Queue[tail++] = t;
//    }
//
//    for(int i =0;i<M;i++){
//        int l;
//        scanf("%d",&l);
//
//        for(int j=0; j<l; j++){
//            int t = 0;
//            scanf("%d",&t);
//            Arr[i][t] = 1;
//            if(check[t]==1){
//                Arr[i][0] = -1;
//            }
//        }
//
//        if(Arr[i][0]==-1){
//            for(int j=0;j<=N; j++){
//                if(Arr[i][j]==1&&check[j]==0){
//                    check[j] = 1;
//                    Queue[tail++] = j;
//                }
//            }
//        }
//    }
//
//    DFS();
//
//
//    for(int i=0; i<M; i++){
//        if(Arr[i][0]==-1) rt --;
//    }
//
//    printf("%d",rt);
//
//}