////
//// Created by junhy on 2023-08-23.
////
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int N,E;
//int graph[801][801] = {0,};
//int v1,v2;
//
//int mid(int x) {
//
//    int DFS[10000][2] = {0,};
//    int weight[1001] = {-1,};
//    for (int i = 0; i < 1000; i++)
//    {
//        weight[i] = -1;
//    }
//    weight[x] = 0;
//
//    int head =0;
//    int tail = 0;
//
//    DFS[tail++][0] = x;
//    DFS[head][1] = 0;
//    while(head<tail){
//        int temp = (int) DFS[head][0];
//        for(int i=1; i<=N; i++){
//            if(graph[temp][i]!=0&&temp!=i) {
//                if (weight[i] == -1 ||
//                    ((weight[i] > (DFS[head][1] + graph[temp][i])))) {
//                    weight[i] = DFS[head][1] + graph[temp][i];
//                    DFS[tail][0] = i;
//                    DFS[tail++][1] = DFS[head][1] + graph[temp][i];
//                }
//            }
//        }
//        head++;
//    }
//
//    return weight[v2];
//
//
//
//}
//
//int End(int x) {
//
//    int DFS[10000][2] = {0,};
//    int weight[1001] = {-1,};
//    for (int i = 0; i < 1000; i++)
//    {
//        weight[i] = -1;
//    }
//    weight[x] =0;
//
//    int head =0;
//    int tail = 0;
//
//    DFS[tail++][0] = x;
//    DFS[head][1] = 0;
//    while(head<tail){
//        int temp = (int) DFS[head][0];
//        for(int i=1; i<=N; i++){
//            if(graph[temp][i]!=0&&temp!=i) {
//                if (weight[i] == -1 ||
//                    ((weight[i] > (DFS[head][1] + graph[temp][i])))) {
//                    weight[i] = DFS[head][1] + graph[temp][i];
//                    DFS[tail][0] = i;
//                    DFS[tail++][1] = DFS[head][1] + graph[temp][i];
//                }
//            }
//        }
//        head++;
//    }
//
//    return weight[N];
//
//}
//
//int Start(int x) {
//
//    int DFS[10000][2] = {0,};
//    int weight[1001] = {-1,};
//    for (int i = 0; i < 1000; i++)
//    {
//        weight[i] = -1;
//    }
//    weight[x] = 0;
//
//    int head =0;
//    int tail = 0;
//
//    DFS[tail++][0] = x;
//    DFS[head][1] = 0;
//    while(head<tail){
//        int temp = (int) DFS[head][0];
//        for(int i=1; i<=N; i++){
//            if(graph[temp][i]!=0&&temp!=i) {
//                if (weight[i] == -1 ||
//                    ((weight[i] > (DFS[head][1] + graph[temp][i])))) {
//                    weight[i] = DFS[head][1] + graph[temp][i];
////                    printf("%d %d\n",i, weight[i]);
//                    DFS[tail][0] = i;
//                    DFS[tail++][1] = DFS[head][1] + graph[temp][i];
//                }
//            }
//        }
//        head++;
//    }
//
//
//
//    int x0 = mid(v1);
//
//    long x1 =-1 ;
//
//    int y0 = weight[v2];
//    int z0 = End(v1);
//    if(x0!=-1&&y0!=-1&&z0!=-1)
//    x1 = x0 + y0 + z0;
//
////    printf("%d %d %d %d\n",x0,y0,End(v1),x1);
//
//
//    long x2 = -1;
//
//    int y1=weight[v1];
//    int z1 = End(v2);
//    if(x0!=-1&&y1!=-1&&z1!=-1)
//        x2 = x0 + y1 + z1;
////    printf("%d %d %d %d\n",x0,y1,End(v2),x2);
//
//    long x3 = x0 + y0 +y1 + z1;
//    long x4 = x0 + y1 + y0 + z0;
//
//
//    if(x0==-1||(x1==-1&&x2==-1)){
//        printf("-1");
//    }
//    else if(x1==0){
//        printf("%ld",x2);
//    }
//    else if(x2==0){
//        printf("%ld",x1);
//    }
//    else if(x1 < x2){
//        if(x1<x3){
//            printf("%ld",x1);
//        }
//        else {
//            printf("%ld",x3);
//        }
//    }
//    else{
//        if(x2<x4) {
//            printf("%ld", x2);
//        }else{
//            printf("%ld",x4);
//        }
//    }
//
//}
//
//
//
//
//int main () {
//
//    scanf("%d %d",&N,&E);
//
//    for(int i =0; i<E; i++){
//        int go,to,weight;
//        scanf("%d %d %d",&go,&to,&weight);
//        graph[go][to] = weight;
//        graph[to][go] = weight;
//    }
//
//    scanf("%d %d",&v1,&v2);
//    if(v1>v2){
//        int temp = v2;
//        v2 = v1;
//        v1 = temp;
//    }
//
//    //v1 -> v2로 가는 최단 경로 구하기
//    //1->v1과 1->v2로 가는 최단 경로 구하기
//
//    Start(1);
//
//
//
//    //v1->N, v2->N으로 가는 최단 경로 구하기
//
//    //1->v1, v2->N or 1->v2, v1->N 중 작은 값 print하기
//
//
//
//
//
//}
