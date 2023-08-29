//
// Created by junhy on 2023-08-29.
//

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX_N 3000 // N의 최대값을 정의
//
//int line[MAX_N][4]; // 선분 정보를 저장할 배열
//float yfind[MAX_N][2];
//int cross[MAX_N+1];
//
//int N;
//
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void sortLinesByX1ThenX2() {
//    // N 값을 입력받음 (생략)
//    scanf("%d", &N);
//
//    // 선분 정보를 입력받아 배열에 저장하고 정렬
//    for (int i = 0; i < N; i++) {
//        int x1, y1, x2, y2;
//        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//
//        if (x1 > x2) {
//            swap(&x1, &x2);
//            swap(&y1, &y2);
//        }
//
//        line[i][0] = x1;
//        line[i][1] = x2;
//
//        line[i][2] = y1;
//        line[i][3] = y2;
//
//        if(x1!=x2){
//            yfind[i][0] = (float)(y2-y1) / (x2-x1);
//            yfind[i][1] = (float)y1 - yfind[i][0] * x1;
//        }
//        else {
//            yfind[i][0] = 0;
//            if(y1!=0){
//                yfind[i][1] = y1;
//            }else{
//                yfind[i][1] = y2;
//            }
//        }
//    }
//
//    // x1 값이 작은 순서대로 정렬
//    for (int i = 0; i < N - 1; i++) {
//        for (int j = 0; j < N - i - 1; j++) {
//            if (line[j][0] > line[j + 1][0] ||
//                (line[j][0] == line[j + 1][0] && line[j][1] > line[j + 1][1])) {
//                for (int k = 0; k < 4; k++) {
//                    swap(&line[j][k], &line[j + 1][k]);
//                }
//                for(int k=0; k<2; k++){
//                    swap(&yfind[j][k],&yfind[j+1][k]);
//                }
//            }
//        }
//    }
//
//    // 정렬된 결과 출력 (생략)
//}
//
//int check() {
//    for(int i =0; i<N-1; i++){
//        for(int j=i+1; j<N; j++){
//
//            int x1 = line[j][0],x2 = 0;
//            if(line[i][1]>line[j][1]){
//                x2 = line[j][1];
//            }else{
//                x2 = line[i][1];
//            }
//
//            float o_y1 = x1 * yfind[i][0] + yfind[i][1];
//            float o_y2 = x2 * yfind[i][0] + yfind[i][1];
//            float n_y1 = x1 * yfind[j][0] + yfind[j][1];
//            float n_y2 = x2 * yfind[j][0] + yfind[j][1];
//
////            if(o_y1>o_y2){
////                float temp = o_y2;
////                o_y2 = o_y1;
////                o_y1 = temp;
////            }
////            if(n_y1>n_y2){
////                float temp = n_y2;
////                n_y2 = n_y1;
////                n_y1 = temp;
////            }
//
//            if(o_y1<n_y1){
//                if(o_y2>n_y2){
//                    printf("%d %d con\n",i,j);
//
//                }
//            }else if(o_y1>n_y1){
//                if(o_y2<n_y2){
//                    printf("%d %d con\n",i,j);
//                }
//            }else if(o_y1==n_y1){
//                printf("%d %d con\n",i,j);
//
//            }else if(o_y1==n_y2){
//                printf("%d %d con\n",i,j);
//
//            }else if(o_y2==n_y1){
//                printf("%d %d con\n",i,j);
//
//            }else if(o_y2==n_y2){
//                printf("%d %d con\n",i,j);
//
//            }
//
//
//
//        }
//    }
//
//}
//
//int main() {
//    sortLinesByX1ThenX2();
//    check();
//}
//
