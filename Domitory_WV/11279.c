//
// Created by junhy on 2023-03-07.
//

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_COUNT 100001

typedef struct TreeNode{
    int data[MAX_COUNT];
    int size;
} TreeNode;

void insertHeap(TreeNode* h,int item){
    int index;


    h->size++;
    index = h->size;
    h->data[index] = item;

    while((index != 1)&&(h->data[index/2]<h->data[index])){

        int temp = h->data[index / 2];
        h->data[index/2] =  h->data[index];
        h->data[index]  = temp;
        index = index / 2;

    }



}

void printHead(TreeNode *h){
    int child;
    if(h->size != 0) {
        printf("%d\n",h->data[1]);
        h->data[1] = h->data[h->size];
        h->size --;

        int cur = 1;
        while((cur*2)<=h->size){
            child = cur *2;
            if(((child +1)<=h->size)&&
               (h->data[child]<h->data[child+1]))
                child ++;

            if(h->data[child]<=h->data[cur])break;
            //부모자식간의 값 교환

            int temp =h->data[child];
            h->data[child] = h->data[cur];
            h->data[cur] = temp;

            cur = child;
        }

    }
    else printf("0\n");
}


void main(){

    TreeNode heap;
    heap.size = 0;

    int T;
    scanf("%d",&T);

    for(int i = 0; i<T; i++){
        int k;
        scanf("%d",&k);
        if(k != 0)insertHeap(&heap,k);
        else printHead(&heap);
    }

}


*/