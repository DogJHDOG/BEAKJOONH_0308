#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int S[30] = { 0, };

int add() {
	int x;
	scanf("%d", &x);
	S[x] = 1;
}

int del() {
	int x;
	scanf("%d", &x);
	S[x] = 0;
}

int check() {
	int x;
	scanf("%d", &x);
	if (S[x] == 1) printf("1\n");
	else printf("0\n");
}

int toggle() {
	int x;
	scanf("%d", &x);
	if (S[x] == 1) S[x] = 0;
	else S[x] = 1;
}

int all() {
	for (int i = 1; i <= 20; i++) {
		S[i] = 1;
	}
}

int empty() {
	for (int i = 1; i <= 20; i++) {
		S[i] = 0;
	}
}
int main() {

	int T = 0;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		char k[20] = { 0, };
		scanf("%s", &k);

		if (strcmp(k, "add") == 0) {
			add();
		}
		if (strcmp(k, "remove") == 0) {
			del();
		}
		if (strcmp(k, "check") == 0) {
			check();
		}
		if (strcmp(k, "toggle") == 0) {
			toggle();
		}
		if (strcmp(k, "all") == 0) {
			all();
		}
		if (strcmp(k, "empty") == 0) {
			empty();
		}
	}

}