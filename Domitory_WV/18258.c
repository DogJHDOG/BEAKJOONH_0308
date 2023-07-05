//
// Created by junhy on 2023-03-17.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int q[2000000] = {0,};

int main() {

    int T;
    scanf("%d",&T);
    int head = 0;
    int tail =0;

    for (int i = 0; i < T; i++) {
        getchar();
        int k = 0;
        char c[20] = {0,};

        scanf("%s", &c);

        if(strcmp(c, "push") == 0){
            scanf("%d",&k);
            q[tail] = k;
            tail ++;

        }
        else if(strcmp(c, "pop") == 0){
            if(head==tail) printf("-1\n");
            else {
                printf("%d\n",q[head]);
                head ++;
            }
        }
        else if(strcmp(c, "size") == 0){
            printf("%d\n",tail - head);
        }
        else if(strcmp(c, "empty") == 0){
            if(head==tail) printf("1\n");
            else printf("0\n");
        }
        else if(strcmp(c, "front") == 0){
            if(head==tail) printf("-1\n");
            else printf("%d\n",q[head]);
        }
        else if(strcmp(c, "back") == 0){
            if(head==tail) printf("-1\n");
            else printf("%d\n",q[tail-1]);
        }

    }

}*/