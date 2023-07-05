//
// Created by junhy on 2023-03-13.
//

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int N;
int click = 0;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

int Arr[30][30] = {0,};
int check[30][30] = {0,};
int result [500] = {0,};

int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 < num2)    // a가 b보다 작을 때는
        return -1;      // -1 반환

    if (num1 > num2)    // a가 b보다 클 때는
        return 1;       // 1 반환

    return 0;    // a와 b가 같을 때는 0 반환
}
int DFS(int x, int y){
    click ++;
    for(int i = 0 ;i<4; i++){
        int tx = x+ dx[i];
        int ty= y + dy[i];
        if(tx>=0&&tx<N&&ty>=0&&ty<N&&Arr[ty][tx]==1&&check[ty][tx]==0){
            check[ty][tx] = 1;
            DFS(tx,ty);
        }
    }

}

int main(){

    scanf("%d",&N);

    for(int i = 0; i<N; i++){
        char k[20] = {0,};
        scanf("%s",k);
        for(int j = 0; j<N; j++){
            if(k[j]=='1') Arr[i][j] = 1;
            else Arr[i][j] = 0;
        }
    }

    int temp = 0;
    for(int i = 0 ;i<N; i++){
        for(int j= 0; j<N; j++){
            if((Arr[i][j]==1)&&(check[i][j]==0)){
                check[i][j] = 1;
                DFS(j,i);
                result[temp] = click;
                click = 0;
                temp ++;
            }
        }
    }

    qsort(result,temp,sizeof(int),compare);

    printf("%d\n",temp);
    for(int i =0; i< temp; i++){
        printf("%d\n",result[i]);
    }

}*/