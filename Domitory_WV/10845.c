/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100000


void insert(int queue[], int* rear, int value) {
	if (*rear < MAX - 1) {
		*rear = *rear + 1;
		queue[*rear] = value;
	}
}

void empty(int front, int rear) {
	if (front == rear) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void size(int front, int rear) {
	if (front == rear) {
		printf("%d\n", 0);
	}
	else {
		printf("%d\n", rear - front);
	}
}

void cfront(int queue[], int front,int rear) {
	if (front == rear) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[front+1]);
	}
}

void cback(int queue[], int front, int rear) {
	if (front == rear) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[rear]);
	}
}


void delete(int queue[], int* front, int rear, int* value) {
	if (*front == rear) {
		printf("-1\n");
	}
	else {
		*front = *front + 1;
		*value = queue[*front];
		printf("%d\n", *value);
	}
}




int main() {

	int N;
	int front, rear;
	front = rear = -1;

	scanf("%d", &N);
	int queue[10001] = { 0, };
	for (int i = 0; i < N; i++) {
		char temp[20] = { 0, };
		scanf("%s", &temp);
		int value = 0;
		if (strcmp(temp, "push") == 0) {
			scanf("%d", &value);
			insert(queue, &rear, value);

		}
		else if (strcmp(temp, "front") == 0) {
			cfront(queue, front, rear);
		}
		else if (strcmp(temp, "back") == 0) {
			cback(queue, front, rear);
		}
		else if (strcmp(temp, "pop") == 0) {
			delete(queue, &front, rear, &value);
		}
		else if (strcmp(temp, "empty") == 0) {
			empty(front, rear);
		}
		else if (strcmp(temp, "size") == 0) {
			size(front,rear);
		}
	}

}*/