

//	2월 20일 : 15829 Hashing -> 
//50점 다시 확인 해보기

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char Arr[100];

int main() {

	int L;
	scanf("%d", &L);

	scanf("%s", &Arr);


	unsigned int rng = 0;
	unsigned int temp = 1;

	for (int i = 0; i < L; i++) {
		int x =  Arr[i]-'a'+1;

		
		int take = temp * x;
		rng += take;
		
		temp = temp * 31;

		rng = rng % 1234567891;
		temp = temp % 1234567891;


	}

	printf("%d", rng);

	
	


}*/