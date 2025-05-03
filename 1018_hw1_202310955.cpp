#include <stdio.h>
#include <iostream>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;
/*
int R, C;
char board[20][20]; // 보드 배열
bool visited[26]; //알파벳
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int move_step = 0; //이동 칸 수

void move(int x, int y, int steps) {
	if (steps > move_step) {
		move_step = steps;
	}

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < R && ny >= 0 && ny < C) {
			int idx = board[nx][ny] - 'A';
			if (!visited[idx]) {
				visited[idx] = true;
				move(nx, ny, steps + 1);
				visited[idx] = false;
			}
		}
	}
}
int main() {
	//cin >> R>> C;
	scanf("%d %d", &R, &C);

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			scanf(" %c", &board[i][j]);
		}
	}

	visited[board[0][0] - 'A'] = true;
	move(0, 0, 1);

	printf("%d", move_step);
	return 0;

}*/