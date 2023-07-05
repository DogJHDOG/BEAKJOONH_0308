//
// Created by junhy on 2023-03-25.
//
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long mod = 1000000007;
void multiply(long long F[2][2], long long M[2][2], long long mod) {
    long long x = ((F[0][0]*M[0][0])%mod + (F[0][1]*M[1][0])%mod) % mod;
    long long y = ((F[0][0]*M[0][1])%mod + (F[0][1]*M[1][1])%mod) % mod;
    long long z = ((F[1][0]*M[0][0])%mod + (F[1][1]*M[1][0])%mod) % mod;
    long long w = ((F[1][0]*M[0][1])%mod + (F[1][1]*M[1][1])%mod) % mod;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(long long F[2][2], long long n, long long mod) {
    if (n <= 1) {
        return;
    }
    long long M[2][2] = {{1, 1}, {1, 0}};

    power(F, n/2, mod);
    multiply(F, F, mod);

    if (n%2 != 0) {
        multiply(F, M, mod);
    }
}

long long fib(long long n, long long mod) {
    if (n <= 0) {
        return 0;
    }
    long long F[2][2] = {{1, 1}, {1, 0}};

    power(F, n-1, mod);
    return F[0][0];
}

int main() {
    long long n;

    scanf("%lld", &n);

    printf("%lld ", fib(n, mod));

    return 0;
}*/