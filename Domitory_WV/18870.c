//
// Created by junhy on 2023-03-05.
//

//1차시도 = 시간초과

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




typedef struct _user{
    int x;
    int loc;

}User;


int temp[1000001] = {0,};

User user[10000001];

int compare(const void *A, const void *B)
{
    User *ptA = (User *)A;
    User *ptB = (User *)B;

    if (ptA->x < ptB->x) return -1;
    else if (ptA->x > ptB->x) return 1;
    else return 0;
}

int main(){

    int T;
    scanf("%d",&T);

    for(int i = 0; i<T; i++) {
        scanf("%d", &user[i].x);
        user[i].loc = i;
    }
    qsort(user, T, sizeof(User), compare);


    int tt = 0;

    temp[user[0].loc] = 0;

    for(int i = 1 ; i<T; i++){
        if(user[i-1].x != user[i].x) tt++;
        temp[user[i].loc] = tt;
    }



    for(int i =0; i<T; i++){
        printf("%d ",temp[i]);
    }

}*/