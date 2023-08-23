////
//// Created by junhy on 2023-08-22.
////
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int Arr[1001][1001] = {0,};
//int Temp[1001] = {0,};
//int N,M,X;
//
//
//void BFS(int x) {
//    int DFS[10000][2] = {0,};
//    int weight[1001] = {0,};
//
//    int head =0;
//    int tail = 0;
//
//    DFS[tail++][0] = x;
//    DFS[head][1] = 0;
//
//    while(head<tail){
//
//        int temp = (int) DFS[head][0];
//
//        for(int i=1; i<=N; i++){
//            if(Arr[temp][i]!=0&&temp!=X) {
//                if (weight[i] == 0 ||
//                    (temp!=i&&(weight[i] > (DFS[head][1] + Arr[temp][i])))) {
//
//                    weight[i] = DFS[head][1] + Arr[temp][i];
//
////                    printf("%d %d %d\n",temp,i,weight[i]);
//                    DFS[tail][0] = i;
//                    DFS[tail++][1] = DFS[head][1] + Arr[temp][i];
//
//                }
//            }
//        }
//        head++;
//    }
//
//    Temp[x] = weight[X];
//
//
//
//
//
//
//}
//
//void End(int x) {
//    int DFS[10000][2] = {0,};
//    int weight[1001] = {0,};
//
//    int head =0;
//    int tail = 0;
//
//    DFS[tail++][0] = x;
//    DFS[head][1] = 0;
//
//    while(head<tail){
//
//        int temp = (int) DFS[head][0];
//        for(int i=1; i<=N; i++){
//            if(Arr[temp][i]!=0) {
//                if (weight[i] == 0 ||
//                    (temp!=x&&(weight[i] > (DFS[head][1] + Arr[temp][i])))) {
//
//                    weight[i] = DFS[head][1] + Arr[temp][i];
//
//                    DFS[tail][0] = i;
//                    DFS[tail++][1] = DFS[head][1] + Arr[temp][i];
//
//                }
//            }
//        }
//        head++;
//    }
//
//    int num = 0;
//    for(int i =1; i<=N; i++){
//        if(i!=X){
//            if(num<(weight[i]+Temp[i])){
//                num = weight[i] + Temp[i];
//            }
//        }
//    }
//
//    printf("%d",num);
//
//
//
//}
//
//
//int main(){
//
//
//    scanf("%d %d %d",&N,&M,&X);
//
//    for(int i=0; i<M; i++){
//
//        int go,to,weight;
//        scanf("%d %d %d",&go,&to,&weight);
//        Arr[go][to] = weight;
//
//    }
//
//
//    for(int i =1; i<=N; i++){
//
//        if(i!=X){
//            BFS(i);
//        }
//
//    }
//
//    End(X);
//
//
//}