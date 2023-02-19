//BaekJoon_11048
//이동하기


/*
* 제한 시간 : 72ms / 1s
* 메모리 제한 : 9848KB / 256MB
* 정답 비율 : 58.064%
*/

#include<iostream>

int map[1001][1001];
int candy[1001][1001];

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m;

	std::cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			std::cin >> map[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			candy[i][j] = 
				Max(Max(candy[i - 1][j], candy[i][j - 1]), candy[i - 1][j - 1]) 
				+ map[i][j];
		}
	}
	std::cout << candy[n][m];
}
