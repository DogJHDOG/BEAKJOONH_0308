/*
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0 
#define MAX_QUEUE_SIZE 10000

typedef int element;
typedef struct {
	element queue[MAX_QUEUE_SIZE];
	int front, rear;
} QueueType;

void error(char* message) {
	fprintf("stderr", message);
	exit(1);
}

void queue_init(QueueType* q) {
	q->front = q->rear = 0;
}

int is_empty(QueueType* q) {
	return(q->front == q->rear);
}

int is_full(QueueType* q) {
	return((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

void enqeue(QueueType* q, element item) {
	if (is_full(q)) error("overflow");

	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	return q->queue[q->rear] = item;
}

element dequeue(QueueType* q) {
	if (is_empty(q))
		error("underflow");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->queue[q->front];
}

#define MAX_VERTICES 50

typedef struct GraphType {
	int n;
	int adj_mat[50][50];
}GraphType;
int visited[50];

void graph_init(GraphType* g) {
	int r, c;
	g->n = 0;
	for (r = 0; r < MAX_VERTICES; r++)
		for (c = 0; c < MAX_VERTICES; c++)
			g->adj_mat[r][c] = 0;
}

void insert_vertex(GraphType *g, int v) {
	if ((g->n) + 1 > MAX_VERTICES) {
		fprintf(stderr, "overflow");
		return;
	}
	g->n++;
}

void insert_edge(GraphType* g, int start, int end) {
	if (start >= g->n || end >= g->n) {
		fprintf(stderr, "graph index error");
		return;
	}
	g->adj_mat[start][end] = 1;
	g->adj_mat[end][start] = 1;

}

void bfs_mat(GraphType* g, int v) {
	int w;
	QueueType q;
	queue_init(&q);
	visited[v] = TRUE;
	printf("visit %d->", v);
	enqeue(&q, v);
	while (!is_empty(&q)) {
		v = dequeue(&q);
		for (w = 0; w < g->n; w++) {
			if (g->adj_mat[v][w] && !visited[w]) {
				visited[w] = TRUE;
				printf("visited %d ->", w);
				enqeue(&q, w);
			}
		}
	}
}

int main() {

	GraphType* g;
	g = (GraphType*)malloc(sizeof(GraphType));
	graph_init(g);
	for (int i = 0; i < 7; i++)
		insert_vertex(g, i);

	insert_edge(g, 0, 1);
	insert_edge(g, 0, 2);
	insert_edge(g, 1, 3);
	insert_edge(g, 1, 4);
	insert_edge(g, 2, 5);
	insert_edge(g, 2, 6);

	printf("BFS\n");
	bfs_mat(g, 0);
	printf("\n");
	free(g);
	return 0;

}

//7576 샘플 코드 

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
배열을 사용한 큐를 이용하여 BFS를 구현한다.
문제 푸는 시에 문제점
1. 배열의 크기에 대한 간과점
2. 큐의 크기
3. 코드 정확도
*/

/*
#define size_x 1005
#define size_y 1005

int map[size_x][size_y];
int check[size_x][size_y];
int q[1000050][2];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int head = 0, tail = 0;
int x, y;
int main() {
	int M, N;
	int i, j;
	scanf("%d %d", &M, &N);
	for (i = 0; i <= N + 1; i++) {
		for (j = 0; j <= M + 1; j++) {
			map[i][j] = -1;
			check[i][j] = 0;
		}
	}

	for (i = 1; i <= N; i++) {
		for (j = 1; j <= M; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1) {
				q[tail][0] = i;
				q[tail][1] = j; // 매번 익은 애들을 큐에 저장한다.
				tail++;
			}
		}
	}

	while (head < tail) {
		x = q[head][0];
		y = q[head][1];
		head++;
		for (i = 0; i < 4; i++) {
			if (x + dx[i] <= N && y + dy[i] <= M && x + dx[i] >= 1 && y + dy[i] >= 1 && map[x + dx[i]][y + dy[i]] == 0) {
				map[x + dx[i]][y + dy[i]] = 1;
				check[x + dx[i]][y + dy[i]] = check[x][y] + 1; // 몇일 걸리는 지 check 한다.
				q[tail][0] = x + dx[i];
				q[tail][1] = y + dy[i]; // 이번에 익은 애들을 큐에 저장한다.
				tail++;
			}
		}
	}


	int days = 0, count = 0;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= M; j++) {
			if (days < check[i][j]) {
				days = check[i][j];
			}
			if (map[i][j] == 0)
				count = 1;
		}
	}
	if (count == 1)
		printf("-1\n");
	else
		printf("%d\n", days);
	return 0;
}
*/