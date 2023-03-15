//BaekJoon_1389
//케빈 베이컨의 6단계 법칙


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2060KB / 128MB
* 정답 비율 : 55.913%
*/

#include<iostream>

int d[101][101];
int answer[101];

int Min(int a, int b) {
	return a > b ? b : a;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m;

	std::cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			d[i][j] = 123456789;
		}
	}

	for (int i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		d[a][b] = 1;
		d[b][a] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				d[j][k] = Min(d[j][k], d[j][i] + d[i][k]);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			answer[i] += d[i][j];
		}
		answer[i] -= d[i][i];
	}

	int min = answer[1];
	int index = 1;

	for (int i = 2; i <= n; i++) {
		if (answer[i] < min) {
			min = answer[i];
			index = i;
		}
	}
	std::cout << index << '\n';
}
