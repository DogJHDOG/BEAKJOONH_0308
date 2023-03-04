#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int head = 0 ;
int tail = 0;

int q[1000001] = {0,};

int main(){

    int k = 0;
    scanf("%d",&k);

    for(int i = 0 ;i<k; i++) {
        int t = 0;
        scanf("%d", &t);

        int max = -10000;
        int min = 10000;
        int mint = 0;
        int maxt = 0;

        for (int j = 0; j < t; j++) {
            char s = 0;
            int n = 0;
            getchar();
            scanf("%c %d", &s, &n);


            if (s == 'I') {

                q[tail++] = n;

                if (min > n) {
                    min = n;
                    mint = tail - 1;
                }
                if (max < n) {
                    max = n;
                    maxt = tail - 1;
                }

            } else {
                tail--;
                if (n == -1) {
                    for (int temp = mint; temp < tail; temp++) {
                        q[temp] = q[temp + 1];
                    }

                } else if (n == 1) {

                    for (int temp = maxt; temp < tail; temp++) {
                        q[temp] = q[temp + 1];
                    }

                }
            }
        }
        if (head >= tail) {
            printf("EMPTY\n");
        } else {
            max = -10000;
            min = 10000;
                for (int temp = head; temp < tail; temp++) {
                    if (min > q[temp]) {
                        min = q[temp];
                    }
                    if (max < q[temp]) {
                        max = q[temp];
                    }
                }
                printf("%d %d\n",max,min);
        }
    }
}