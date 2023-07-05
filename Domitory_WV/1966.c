/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Arr[1000] = { 0, };



int main() {

	int T;
	scanf("%d", &T);
	int N, M;
	int click = 0;

	for (int l = 0; l < T; l++) {
		scanf("%d %d", &N, &M);

		int click = 0;

		int name[1000] = { 0, };
		int ncheck[1000] = { 0, };
		int check[1000] = { 0, };

		for (int i = 0; i < N; i++) {
			scanf("%d", &Arr[i]);
		}

		name[M] = 1;

		int loc = 0;

	while (1) {


			int max = 0;
			for (int i = 0; i < N - click; i++) {
				check[i]=Arr[i];
				ncheck[i] = name[i];		
				if (Arr[i] > max) {
					max = Arr[i];
					loc = i;
				}

			}
			click++;


			if ((N - click) <= 0) {
				break;
			}

			if (name[loc] == 1) break;

			for (int i = 0; i < N - click; i++) {
			
				loc++;
				
				if (loc == N - click + 1) {
					loc = 0;
				}

				Arr[i] = check[loc];
				name[i] = ncheck[loc];
				
			}

		}

		printf("%d\n", click);
	}
}*/