//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int data[1000000] = {0,};
//int data2[1000000] = {0,};
//typedef struct TreeNode{
//    int size;
//} TreeNode;
//
//void insertHeap(TreeNode* h,int item){
//    int index;
//
//
//    h->size++;
//    index = h->size;
//    data    [index] = item;
//
//    while((index != 1)&&(data[index/2]>data[index])){
//
//        int temp = data[index / 2];
//        data[index/2] =  data[index];
//        data[index]  = temp;
//        index = index / 2;
//
//    }
//
//}
//
//void printHead(TreeNode *h){
//    int child;
//    if(h->size != 0) {
//        data[1] = data[h->size];
//
//        h->size --;
//
//        int cur = 1;
//        while((cur*2)<=h->size){
//            child = cur *2;
//            if(((child +1)<=h->size)&&
//               (data[child]>data[child+1]))
//                child ++;
//
//            if(data[child] >=data[cur])break;
//            //부모자식간의 값 교환
//
//            int temp =data[child];
//            data[child] = data[cur];
//            data[cur] = temp;
//
//            cur = child;
//        }
//
//    }
//}
//
//void insertHeap_large(TreeNode* h,int item){
//    int index;
//
//
//    h->size++;
//    index = h->size;
//    data2[index] = item;
//
//    while((index != 1)&&(data2[index/2]<data2[index])){
//
//        int temp = data2[index / 2];
//        data2[index/2] =  data2[index];
//        data2[index]  = temp;
//        index = index / 2;
//
//    }
//
//
//
//}
//
//void printHead_large(TreeNode *h){
//    int child;
//    if(h->size != 0) {
//        data2[1] = data2[h->size];
//        h->size --;
//
//        int cur = 1;
//        while((cur*2)<=h->size){
//            child = cur *2;
//            if(((child +1)<=h->size)&&
//               (data2[child]<data2[child+1]))
//                child ++;
//
//            if(data2[child]<=data2[cur])break;
//            //부모자식간의 값 교환
//
//            int temp =data2[child];
//            data2[child] = data2[cur];
//            data2[cur] = temp;
//
//            cur = child;
//        }
//
//    }
//}
//
//
//int main(){
//
//    TreeNode large;
//    TreeNode small;
//    large.size = 0;
//    small.size = 0;
//    int R;
//    scanf("%d",&R);
//    for(int i =0 ; i<R; i++){
//        int T;
//        scanf("%d",&T);
//        int head = 0;
//
//        for(int j = 0; j<T; j++) {
//            getchar();
//            int k = 0;
//            int c = 0;
//            scanf("%c %d", &c, &k);
//
//            if(c=='I'){
//                insertHeap(&small,k);
//                insertHeap_large(&large,k);
//                head++;
//            }
//            else {
//
//
//                if (k == 1) {
//                    if(large.size != 0) {
//                        head--;
//                        printHead_large(&large);
//                    }
//                } else {
//                    if(small.size != 0) {
//                        printHead(&small);
//                        head--;
//
//                    }
//                }
//            }
//
//        }
//
//        if(head <= 0){
//            printf("EMPTY\n");
//        }
//        else{
//            printf("%d %d\n",data2[1],data[1]);
//        }
//
//    }
//
//}