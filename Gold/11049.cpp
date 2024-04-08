//BaekJoon_11049
//행렬 곱 연산 횟수의 최소값 구하기
/*
* 제한 시간 : 160ms / 1s
* 메모리 제한 : 3000KB / 256MB
* 정답 비율 : 43.997%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[501][501];
vector<pair<int, int>> v;

int Func(int s, int e) {
	int result = 987654321;

	if (dp[s][e] != -1) {
		return dp[s][e];
	}
	if (s == e) {
		return 0;
	}
	if (s + 1 == e) {
		return v[s].first * v[s].second * v[e].second;
	}
	for (int i = s; i < e; i++) {
		result = min(result, v[s].first * v[i].second * v[e].second + 
					Func(s, i) + Func(i + 1, e));
	}
	return dp[s][e] = result;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	v.resize(n + 1);

	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < n + 1; j++) {
			dp[i][j] = -1;
		}
	}

	for (int i = 1; i <= n; i++) {
		int a, b;

		cin >> b >> a;

		v[i] = make_pair(b, a);
	}
	cout << Func(1, n) << '\n';
}
