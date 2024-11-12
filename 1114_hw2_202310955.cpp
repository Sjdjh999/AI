#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#define MAX_COST 10000  

int dp[MAX_COST + 1];

int main() {
    int n;
    double m;

    while (1) {
        scanf("%d %lf", &n, &m);
        if (n == 0 && m == 0.0) break;

        int budget = (int)(m * 100 + 0.5);  
        for (int i = 0; i <= budget; i++) {
            dp[i] = 0;  
        }

        for (int i = 0; i < n; i++) {
            int calorie, cost;
            double price;
            scanf("%d %lf", &calorie, &price);
            cost = (int)(price * 100 + 0.5);  
            
            for (int j = budget; j >= cost; j--) {
                if (dp[j - cost] + calorie > dp[j]) {
                    dp[j] = dp[j - cost] + calorie;
                }
            }
        }

        printf("%d\n", dp[budget]);
    }

    return 0;
}
