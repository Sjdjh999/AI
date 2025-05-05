#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define MAX_N 1000001

int dp[MAX_N];

int make_one(int n) {
    dp[1] = 0;  

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;  

        if (i % 2 == 0) {
            dp[i] = MIN(dp[i], dp[i / 2] + 1);  
        }

        if (i % 3 == 0) {
            dp[i] = MIN(dp[i], dp[i / 3] + 1);  // 3으로 나누는 경우
        }
    }

    return dp[n];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", make_one(n));
    return 0;
}