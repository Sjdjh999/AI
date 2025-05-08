#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
/*
int N;
int parent[50];
bool visited[50];
int leafcount =0;

void count(int node) {
	bool leaf = true;
	visited[node] = true;

	for (int i = 0; i < N; i++) {
		if (parent[i] == node && !visited[i]) {
			leaf = false;
			count(i);
		}
	}
	if (leaf) {
		leafcount++;
	}
}
int main() {
	int root, delete_node;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &parent[i]);
		if (parent[i] == -1) {
			root = i;
		}
	}

	scanf("%d", &delete_node);

	if (delete_node == root) {
		printf("0\n");
		return 0;
	}

	parent[delete_node] = -2;
	

	count(root);
	printf("%d\n", leafcount);

	return 0;
}*/