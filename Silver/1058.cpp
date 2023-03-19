//BaekJoon_1058
//친구


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2044KB / 128MB
* 정답 비율 : 44.069%
*/

#include<iostream>
#include<string>

int distance[50][50];
int friend_graph[50][50];

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, answer = 0;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			distance[i][j] = 987654321;
		}
	}

	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;

		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'Y') {
				friend_graph[i][j] = 1;
				distance[i][j] = 1;
			}
			else {
				friend_graph[i][j] = 0;
			}
		}
	}

	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (distance[i][j] > distance[i][k] + distance[k][j]) {
					distance[i][j] = distance[i][k] + distance[k][j];
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		int count = 0;

		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}
			if (distance[i][j] <= 2) {
				count++;
			}
		}
		answer = Max(answer, count);
	}
	std::cout << answer;
}
