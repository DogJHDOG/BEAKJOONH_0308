//
// Created by junhy on 2023-08-27.
//

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//    int vertex;
//    struct Node* next;
//} Node;
//
//Node** adjList; // 인접 리스트
//int* visited;
//int N, M;
//
//void addEdge(int u, int v) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->vertex = v;
//    newNode->next = adjList[u];
//    adjList[u] = newNode;
//}
//
//void DFS(int n) {
//    visited[n] = 1;
//
//    Node* curr = adjList[n];
//    while (curr != NULL) {
//        int neighbor = curr->vertex;
//        if (!visited[neighbor]) {
//            DFS(neighbor);
//        }
//        curr = curr->next;
//    }
//
//    printf("%d ", n);
//}
//
//int main() {
//    scanf("%d %d", &N, &M);
//
//    // 메모리 할당
//    adjList = (Node**)malloc((N + 1) * sizeof(Node*));
//    visited = (int*)calloc(N + 1, sizeof(int));
//
//    for (int i = 1; i <= N; i++) {
//        adjList[i] = NULL;
//    }
//
//    for (int i = 0; i < M; i++) {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        addEdge(b, a);
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (!visited[i]) {
//            DFS(i);
//        }
//    }
//
//    // 메모리 해제
//    for (int i = 1; i <= N; i++) {
//        Node* curr = adjList[i];
//        while (curr != NULL) {
//            Node* temp = curr;
//            curr = curr->next;
//            free(temp);
//        }
//    }
//    free(adjList);
//    free(visited);
//
//    return 0;
//}
