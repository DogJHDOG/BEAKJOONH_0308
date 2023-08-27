//
// Created by junhy on 2023-08-28.
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//    int value;
//    struct Node* next;
//} Node;
//
//int N;
//int dp[10001][2] = {0};
//Node* graph[10001] = {NULL};
//
//int myMax(int a, int b) {
//    return a > b ? a : b;
//}
//
//
//void check(int n) {
//    dp[n][0] = -1;
//    int maxVal = 0;
//    Node* curr = graph[n];
//    while (curr != NULL) {
//        int neighbor = curr->value;
//        if (maxVal < dp[neighbor][1]) {
//            maxVal = dp[neighbor][1];
//        }
//        curr = curr->next;
//    }
//    dp[n][1] += maxVal;
//}
//
//void insertNode(int n, int value) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->value = value;
//    newNode->next = graph[n];
//    graph[n] = newNode;
//}
//
//int main() {
//    scanf("%d", &N);
//
//    for (int i = 1; i <= N; i++) {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        dp[i][1] = a;
//        for (int j = 0; j < b; j++) {
//            int c;
//            scanf("%d", &c);
//            insertNode(i, c);
//        }
//    }
//
//    for (int i = 1; i <= N; i++) {
//        check(i);
//    }
//
//    int result = 0;
//    for (int i = 1; i <= N; i++) {
//        result = myMax(result, dp[i][1]);
//    }
//
//    printf("%d", result);
//
//    // Free memory used by the graph
//    for (int i = 1; i <= N; i++) {
//        Node* curr = graph[i];
//        while (curr != NULL) {
//            Node* temp = curr;
//            curr = curr->next;
//            free(temp);
//        }
//    }
//
//    return 0;
//}
