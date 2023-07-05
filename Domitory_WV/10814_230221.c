/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    int age;
    char name[200];
}   p_list;


p_list info[100001];

int compare(const void* a, const void* b)    // 오름차순 비교 함수 구현
{
    return((p_list*)a)->age - ((p_list*)b)->age;
}


int main() {


    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &info[i].age);
        scanf("%s", info[i].name);
    }

    qsort(info, N, sizeof(info[0]), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %s\n", info[i].age, info[i].name);
    }


}*/

