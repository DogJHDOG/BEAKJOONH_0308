//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int Ground[1000][1000] = {0,};
//int visit[1000][1000] = {0,};
//int Result[1000][1000] = {0,};
//
//int Queue[1000000][3] = {0,};
//
//int n,m;
//
//int dx[4] = {-1,0,1,0};
//int dy[4] = {0,1,0,-1};
//
//int DFS(int x,int y,int num){
//
//    int head = 0;
//    int tail = 0;
//
//    Queue[tail][0] = x;
//    Queue[tail][1] = y;
//    Queue[tail][2] = num;
//    tail ++;
//
//    int tm = m;
//    int tn = n;
//
//    while(head<tail){
//
//
//
//        int tx = Queue[head][0];
//        int ty = Queue[head][1];
//        int tnum = Queue[head][2];
//
//
//        int i;
//        for(i = 0; i<4; i++){
//            if((ty+dy[i])<n&&(tx+dx[i])<m&&(tx+dx[i])>=0&&(ty+dy[i])>=0&&Ground[ty+dy[i]][tx+dx[i]]==1&&visit[ty+dy[i]][tx+dx[i]]==0){
//                Queue[tail][0] = tx+dx[i];
//                Queue[tail][1] = ty+dy[i];
//                Queue[tail][2] = tnum+1;
//                visit[ty+dy[i]][tx+dx[i]] = 1;
//                Result[ty+dy[i]][tx+dx[i]] = tnum+1;
//
//                tail ++;
//            }
//        }
//        head++;
//
//    }
//
//}
//
//
//int main(){
//
//    scanf("%d %d",&n,&m);
//
//
//    //가로
//    int x = 0;
//    //세로
//    int y = 0;
//
//    for(int i = 0; i<n; i++){
//        for(int j=0; j<m; j++){
//            scanf("%d",&Ground[i][j]);
//            if(Ground[i][j]!=1) visit[i][j] = 1;
//            if(Ground[i][j]==2) {
//                y = i;
//                x = j;
//            }
//        }
//    }
//
//
//    DFS(x,y,0);
//    for(int i =0; i<n; i++){
//        for(int j =0; j<m; j++){
//            if(Result[i][j]==0&&Ground[i][j]==1){
//                printf("%d ",-1);
//                continue;
//            }
//            printf("%d ",Result[i][j]);
//        }
//        printf("\n");
//    }
//
//
//
//
//}