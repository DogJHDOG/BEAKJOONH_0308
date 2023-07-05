/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char Arr[10000];
	while (1) {
	
		scanf("%s", &Arr);
		
		if (strcmp(Arr, "0")==0) {
			return 0;
		}



		int size = strlen(Arr) - 1;
		int click = 0;
		for (int i = 0; i < (size+1)/ 2; i++) {
			if (Arr[i] != Arr[size-i]) {
				click = 1;
				break;
			}
		}
		if (click == 0) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}

}*/