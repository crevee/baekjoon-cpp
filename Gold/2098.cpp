//BaekJoon_2098
//외판원 순회

/*
* 제한 시간 : 24ms / 1s
* 메모리 제한 : 6116KB / 128MB
* 정답 비율 : 27.338%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int n;
int w[16][16];
int dp[16][1 << 16];

int TSP(int c, int v) {
	if (v == (1 << n) - 1) {
		return w[c][0] == 0 ? 987654321 : w[c][0];
	}

	if (dp[c][v] != 0) {
		return dp[c][v];
	}

	int result = 987654321;

	for (int i = 0; i < n; i++) {
		if ((v & (1 << i)) == 0 && w[c][i] != 0) {
			result = min(result, TSP(i, (v | (1 << i))) + w[c][i]);
		}
	}
	dp[c][v] = result;

	return dp[c][v];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> w[i][j];
		}
	}
	cout << TSP(0, 1) << '\n';
}
