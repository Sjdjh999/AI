#include <stdio.h>
#include <queue>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;
/*
int k;
int V, E;
int graph[20001][20001];
int colors[20001];

int bfs(int start, int V) {
	queue<int> q;
	q.push(start);
	colors[start] = 1;

	while (!q.empty()) {
		int node = q.front();
		q.pop();

		for (int i = 1; i <= V; i++) {
			if (graph[node][i] == 1) {
				if (colors[i] == 0) {
					colors[i] = -colors[node];
					q.push(i);
				}
				else if (colors[i] == colors[node]) {
					return false;
				}
			}
		}
	}
	return true;
}

int main() {
	scanf("%d", &k);

	while (k--) {
		scanf("%d %d", &V, &E);

		for (int i = 1; i <= V; i++) {
			for (int j = 1; j <= V; j++) {
				graph[i][j] = 0; // 그래프 초기화
			}
			colors[i] = 0;
		}

		for (int i = 0; i < E; i++) { //간선 입력
			int u, v;
			scanf("%d %d", &u, &v);
			graph[u][v] = 1;
			graph[v][u] = 1;
		}
		bool graph_check = true;
		for (int i = 0; i <= V; i++) {
			if (colors[i] == 0) {
				if (!bfs(i, V)) {
					graph_check = false;
					break;
				}
			}
		}
		if (graph_check) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}*/
