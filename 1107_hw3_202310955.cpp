//1865 ¿úÈ¦

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
/*
#define MAX_N 500
#define MAX_M 2500
#define MAX_W 200

int N, M, W;
int dist[MAX_N + 1];
Edge edges[MAX_M * 2 + MAX_W];
bool NegativeCycle = false;

typedef struct {
	int u, v, w;
}Edge;

int time_check(int start) {

	
}
int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		scanf("%d %d %d", &N, &M, &W);

		int count = 0;

		for (int i = 0; i < M; i++) {
			int u, v, w;
			scanf("%d %d %d", &u, &v, &w);
			edges[count++] = Edge{ u,v,w };
			edges[count++] = Edge{ v,u,w };
		}
		for (int i = 0; i < W; i++) {
			int u, v, w;
			scanf("%d %d %d", &u, &v, &w);
			edges[count++] = Edge{ u, v, -w };
		}
		for (int i = 1; i <= N; i++) {
			if (time_check(i)) {
				NegativeCycle = true;
				break;
			}
		}
		printf(NegativeCycle ? "YES\n" : "NO\n");

	}
}
*/