//
// Created by junhy on 2023-04-02.
//

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int Arr[10][10] ={0,};
//int check[10][10] = {0,};
//int q[10001][2] = {0,};
//int dx[4] = {-1,0,1,0};
//int dy[4] = {0,1,0,-1};
//int main(){
//
//    int N,M;
//    scanf("%d %d",&N,&M);
//
//    int head = 0;
//    int tail = 0;
//    int max =0;
//    for(int i = 0; i<N; i++){
//        for(int j =0; j<M; j++){
//            scanf("%d",&Arr[i][j]);
//            if(Arr[i][j]==2){
//                check[i][j] = 1;
//                q[tail][0] = j;
//                q[tail][1] = i;
//                tail++;
//            }
//            else if(Arr[i][j]==0){
//                max++;
//            }
//        }
//    }
//
//
//    while(head<tail){
//        int x = q[head][0];
//        int y = q[head][1];
//        for(int i = 0; i<4; i++){
//            if((x+dx[i])>=0&&(x+dx[i])<M&&(y+dy[i])>=0&&(y+dy[i])<N&&Arr[y+dy[i]][x+dx[i]]==0&&check[y+dy[i]][x+dx[i]]==0){
//                q[tail][0] = x+dx[i];
//                q[tail][1] = y+dy[i];
//                tail++;
//                Arr[y+dy[i]][x+dx[i]] = 2;
//                check[y+dy[i]][x+dx[i]] = 1;
//                max --;
//            }
//        }
//
//        head++;
//
//    }
//
//    for(int i =0; i<N; i++){
//        for(int j = 0; j<M; j++){
//            printf("%d ",Arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    printf("%d",max);
//
//
//
//}