/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10
#include <stdlib.h>

void insert(int queue[], int* rear, int value) {
	if (*rear < MAX - 1) {
		*rear = *rear + 1;
		queue[*rear] = value;
	}
	else {
		printf("The queue is full can not insert a value\n");
		exit(0);
	}
}

void delete(int queue[], int* front, int rear, int* value) {
	if (*front == rear) {
		printf("The queue is empty can not delete value\n");
		exit(0);
	}
	*front = *front + 1;
	*value = queue[*front];
}

void main() {

	int queue[MAX];
	int front, rear;
	int n, value;
	front = rear = -1;
	do {
		do {
			printf("Enter the element to be inserted\n");
			scanf("%d",&value);
			insert(queue, &rear,value);
			printf("Enter 1 to continue\n");
			scanf("%d", &n);
		} while( n == 1);

		printf("Enter 1 to delete an element\n");
		scanf("%d", &n);
		while (n == 1){
			delete(queue, &front, rear, &value);
			printf("the value deleted is %d\n", value);
			printf("Enter 1 to delete an element\n");
			scanf("%d", &n);
		}
		printf("Enter 1 to continue\n");
		scanf("%d", &n);
	} while (n == 1);

}*/