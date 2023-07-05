/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 200000


void insert(int queue[], int* rear, int value) {
	if (*rear < MAX - 1) {
		*rear = *rear + 1;
		queue[*rear-1] = value;
	}
}
void insert_front(int queue[], int *front, int value) {
	if (*front > 0) {
		*front = *front - 1;
		queue[*front] = value;
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

void cfront(int queue[], int front, int rear) {
	if (front == rear) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[front]);
	}
}

void cback(int queue[], int front, int rear) {
	if (front == rear) {
		printf("-1\n");
	}
	else {
		printf("%d\n", queue[rear-1]);
	}
}


void delete(int queue[], int* front, int rear, int* value) {
	if (*front == rear) {
		printf("-1\n");
	}
	else {
		*value = queue[*front];
		*front = *front + 1;
		printf("%d\n", *value);
	}
}

void delete_back(int queue[], int front, int* rear, int* value) {
	if (front == *rear) {
		printf("-1\n");
	}
	else {
		*value = queue[*rear - 1];
		*rear = *rear - 1;
		printf("%d\n", *value);
	}
}



int main() {

	int N;
	int front, rear;
	front = rear = 10000;

	scanf("%d", &N);
	int queue[20001] = { 0, };
	for (int i = 0; i < N; i++) {
		char temp[20] = { 0, };
		scanf("%s", &temp);
		int value = 0;
		if (strcmp(temp, "push_back") == 0) {
			scanf("%d", &value);
			insert(queue, &rear, value);

		}
		else if (strcmp(temp, "push_front") == 0) {
			scanf("%d", &value);
			insert_front(queue, &front, value);
		}
		else if (strcmp(temp, "front") == 0) {
			cfront(queue, front, rear);
		}
		else if (strcmp(temp, "back") == 0) {
			cback(queue, front, rear);
		}
		else if (strcmp(temp, "pop_front") == 0) {
			delete(queue, &front, rear, &value);
		}
		else if (strcmp(temp, "pop_back") == 0) {
			delete_back(queue, front, &rear, &value);

		}
		else if (strcmp(temp, "empty") == 0) {
			empty(front, rear);
		}
		else if (strcmp(temp, "size") == 0) {
			size(front, rear);
		}
	}
}*/