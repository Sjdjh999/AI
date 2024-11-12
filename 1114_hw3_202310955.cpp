#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#define MAX_AMOUNT 10000

int dp[MAX_AMOUNT + 1];
int temp[MAX_AMOUNT + 1];

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int* coins = (int*)malloc(n * sizeof(int));
		int* counts = (int*)malloc(n * sizeof(int));
		int target;
		
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &coins[i], &counts[i]);
		}
		scanf("%d", &target);

		for (int i = 0; i <= target; i++) {
			scanf("%d %d", &coins[i], &counts[i]);
		}
		scanf("%d", &target);

		for (int i = 0; i <= target; i++)
			dp[i] = 0;
		dp[0] = 1;

		for (int i = 0; i < n; i++) {
			int coin = coins[i];
			int count = counts[i];

			for (int j = 0; j <= target; j++) {
				temp[j] = dp[j];
			}
			for (int j = coin; j <= target; j++) {
				if (dp[j - coin]) {
					for (int k = 1; k <= count && j + k * coin <= target; k++) {
						temp[j + k * coin] = 1;
					}
				}
			}
			for (int j = 0; j <= target; j++) {
				dp[j] = temp[j];
			}
		}
		printf("%d\n", dp[target]);

		free(coins);
		free(counts);
	}
	return 0;
}