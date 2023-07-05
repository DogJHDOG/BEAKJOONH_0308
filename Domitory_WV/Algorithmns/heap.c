//
// Created by junhy on 2023-03-17.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


#define MAX_ELEMENT 1000000
//힙 구현
typedef struct {
    int key;
} element;
typedef struct{
    element heap[MAX_ELEMENT];
    int heap_size;
}HeapType;

typedef struct{
    element heap[MAX_ELEMENT];
    int heap_size ;
}HeapType_min;


//생성 함수
HeapType* create(){
    return (HeapType*)malloc(sizeof(HeapType));
}

HeapType_min* create_min(){
    return (HeapType_min*)malloc(sizeof(HeapType_min));
}

//초기화 함수
void init(HeapType* h){
    h->heap_size = 0;
}

void init_min(HeapType_min* h){
    h->heap_size = 0;
}


//삽입 함수
void insert_max_heap(HeapType *h,element item){
    //현재 요소의 개수가 heap_size인 히프 h에 item를 삽입한다.
    int i;
    i = ++(h->heap_size);

    // 트리를 거슬러 올라가면서 부모 노드와 비교하는 과정
    while((i!=1)&&(item.key > h->heap[i/2].key)){
        h->heap[i] = h->heap[i/2];
        i /= 2;
    }
    h->heap[i] = item; //새로운 노드를 삽입
}

void insert_min_heap(HeapType_min *h,element item){
    //현재 요소의 개수가 heap_size인 히프 h에 item를 삽입한다.
    int i;
    i = ++(h->heap_size);

    // 트리를 거슬러 올라가면서 부모 노드와 비교하는 과정
    while((i!=1)&&(item.key < h->heap[i/2].key)){
        h->heap[i] = h->heap[i/2];
        i /= 2;
    }
    h->heap[i] = item; //새로운 노드를 삽입
}


//삭제함수
element delete_max_heap(HeapType* h) {
    int parent, child;
    element item, temp;

    item = h->heap[1];
    temp = h->heap[(h->heap_size)--];
    parent = 1;
    child = 2;
    while ((child <= h->heap_size)) {
        // 현재 노드의 자식노드 중 더 큰 자식노드를 찾는다.
        if ((child <= h->heap_size)&&
                (h->heap[child].key) < h->heap[child + 1].key)child++;
        if(temp.key>=h->heap[child].key)break;
        // 한 단계 아래로 이동
        h->heap[parent] = h->heap[child];
        parent = child;
        child *= 2;
    }
    h->heap[parent] = temp;
    return item;

}

element delete_min_heap(HeapType_min* h) {
    int parent, child;
    element item, temp;

    item = h->heap[1];
    temp = h->heap[(h->heap_size)--];
    parent = 1;
    child = 2;
    while ((child <= h->heap_size)) {
        // 현재 노드의 자식노드 중 더 큰 자식노드를 찾는다.
        if ((child <= h->heap_size)&&
            (h->heap[child].key) > h->heap[child + 1].key)child++;
        if(temp.key<=h->heap[child].key)break;
        // 한 단계 아래로 이동
        h->heap[parent] = h->heap[child];
        parent = child;
        child *= 2;
    }
    h->heap[parent] = temp;
    return item;

}


int main() {

    element e1 = {10}, e2 = {5}, e3 = {30};


    HeapType *heap;
    HeapType_min *heap_min;

    heap = create();
    heap_min = create_min();


    int R;
    scanf("%d", &R);

    for (int i = 0; i < R; i++) {
        int T;
        scanf("%d", &T);
        int head = 0;

        init_min(heap_min);
        init(heap);
        for (int j = 0; j < T; j++) {
            getchar();
            int k = 0;
            int c = 0;
            scanf("%c %d", &c, &k);
            element ek;
            ek.key = k;


            if (c == 'I') {
                head ++;
                insert_max_heap(heap, ek);
                insert_min_heap(heap_min, ek);
            } else {

                if (k == 1) {
                    if (heap->heap_size !=0) {
                        element temp;
                        temp = delete_max_heap(heap);
                        for(int i = heap_min->heap_size; i>0; i--){
                            if(temp.key==heap_min->heap[i].key){
                                heap_min->heap[i] = heap_min->heap[i+1];
                                heap_min->heap_size--;
                            }
                        }
                    }
                } else {
                    if (heap_min->heap_size != 0) {
                        element temp;
                        temp = delete_min_heap(heap_min);
                        for(int i = heap->heap_size; i>0; i--){
                            if(temp.key==heap->heap[i].key){
                                heap->heap[i].key = heap->heap[i+1].key;
                                heap->heap_size--;
                            }
                        }
                    }
                }

            }


        }

        if(heap->heap_size == 0){
            printf("EMPTY\n");
        }
        else{
            printf("%d %d\n",heap->heap[1].key,heap_min->heap[1].key);
        }

    }

    free(heap);
    free(heap_min);
}*/