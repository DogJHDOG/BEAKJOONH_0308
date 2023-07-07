////
//// Created by junhy on 2023-07-06.
////
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int R,C,T;
//int CNT_L = 0;
//
//int spc[52][52] = {0,};
//
//int loc[3600][3] = {0,};
//
//
//int dx[4] = {-1,0,1,0};
//int dy[4] = {0,1,0,-1};
//
//int stream(){
//
//    for(int i =0; i<CNT_L; i++){
//
//        int y = loc[i][0];
//        int x = loc[i][1];
//        int Arc=loc[i][2]/5;
//
//        int tpt = 0;
//
//        for(int j = 0; j<4; j++){
//
//            if((Arc>0)&&((y+dy[j])>=0)&&((y+dy[j])<R)&&((x+dx[j])>=0)&&((x+dx[j])<C)){
//
//                if(spc[y+dy[j]][x+dx[j]]!=-1){
//                    spc[y+dy[j]][x+dx[j]] +=Arc;
//                    tpt++;
//                }
//
//            }
//        }
//
//        spc[y][x] -= Arc*tpt;
//    }
//
//
//
//
//}
//
//
//int up(int t){
//
//    if(t==0){
//
//        return 0;
//
//    }
//
//    int cnt =spc[t][1];
//    spc[t][1] = 0;
//
//    for(int i=1; i<(C-1);i++){
//        int tcnt = spc[t][i+1];
//        spc[t][i+1] = cnt;
//        cnt = tcnt;
//    }
//
//    for(int i=t;i>0; i--){
//        int tcnt = spc[i-1][C-1];
//        spc[i-1][C-1] = cnt;
//        cnt = tcnt;
//    }
//
//
//    for(int i=C-1; i>0;i--){
//        int tcnt = spc[0][i-1];
//        spc[0][i-1] = cnt;
//        cnt = tcnt;
//    }
//
//    for(int i=0;i<(t-1); i++){
//        int tcnt = spc[i+1][0];
//        spc[i+1][0] = cnt;
//        cnt = tcnt;
//    }
//
//}
//
//int down(int t){
//
//    if(t==R-1){
//        return 0;
//    }
//
//    int cnt =spc[t][1];
//    spc[t][1] = 0;
//
//    for(int i=1; i<(C-1);i++){
//        int tcnt = spc[t][i+1];
//        spc[t][i+1] = cnt;
//        cnt = tcnt;
//    }
//
//    for(int i=t;i<(R-1);i++){
//        int tcnt = spc[i+1][C-1];
//        spc[i+1][C-1] = cnt;
//        cnt = tcnt;
//    }
//
//    for(int i=C-1; i>0;i--){
//        int tcnt = spc[R-1][i-1];
//        spc[R-1][i-1] = cnt;
//
//        cnt = tcnt;
//    }
//
//    for(int i=R-1;i>(t+1); i--){
//        int tcnt = spc[i-1][0];
//        spc[i-1][0] = cnt;
//        cnt = tcnt;
//    }
//
//}
//
//int re(){
//    CNT_L = 0;
//    for(int i =0; i<R;i++){
//        for(int j=0;j<C; j++){
//            if(spc[i][j]>4) {
//                loc[CNT_L][0] = i;
//                loc[CNT_L][1] = j;
//                loc[CNT_L][2] = spc[i][j];
//                CNT_L++;
//            }
//        }
//    }
//
//}
//
//int main(){
//
//    scanf("%d %d %d",&R,&C,&T);
//    int k =0;
//
//    for(int i = 0; i<R;i++){
//        for(int j =0; j<C; j++){
//            scanf("%d",&spc[i][j]);
//            if(spc[i][j]>4){
//                loc[CNT_L][0] = i;
//                loc[CNT_L][1] = j;
//                loc[CNT_L][2] = spc[i][j];
//                CNT_L ++;
//            }
//            else if(spc[i][j]==-1){
//                k=i-1;
//            }
//        }
//    }
//
//
//    for(int i =0;i<T; i++){
//        stream();
//        up(k);
//        down(k+1);
//        re();
//
//    }
//
//    int total =0;
//    for(int i=0; i<R;i++){
//        for(int j=0; j<C; j++){
//            if(spc[i][j]>0){
//                total += spc[i][j];
//            }
//        }
//    }
//
//    printf("%d",total);
//
//}
//
