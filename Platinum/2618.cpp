//BaekJoon_2618
//경찰차

/*
* 제한 시간 : 36ms / 1s
* 메모리 제한 : 9984KB / 128MB
* 정답 비율 : 34.492%
*/

#include <iostream>
#include <vector>
#include <array>

using namespace std;

int n, w;

array<array<int, 1001>, 1001> dp;
array<array<int, 1001>, 1001> cache;

vector<pair<int, int>> v;

int Length(int& a, int& b) {
	return abs(v[a].first - v[b].first) + abs(v[a].second - v[b].second);
}

int Distance(int a, int b) {
	if (a == w + 1 || b == w + 1) {
		return 0;
	}
	if (dp[a][b] != 0) {
		return dp[a][b];
	}

	int next_case = max(a, b) + 1;

	int x = Distance(a, next_case) + Length(b, next_case);
	int y = Distance(next_case, b) + Length(a, next_case);

	if (x < y) {
		cache[a][b] = 2;
	}
	else {
		cache[a][b] = 1;
	}
	dp[a][b] = min(x, y);

	return dp[a][b];
}

void PoliceCar() {
	int a = 0, b = 1;

	for (int i = 2; i < w + 2; i++) {
		if (cache[a][b] == 1) {
			cout << "1\n";

			a = i;
		}
		else {
			cout << "2\n";

			b = i;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> w;

	v.emplace_back(1, 1);
	v.emplace_back(n, n);

	for (int i = 0; i < w; i++) {
		int x, y;

		cin >> x >> y;

		v.emplace_back(x, y);
	}

	cout << Distance(0, 1) << '\n';
	PoliceCar();

	return 0;
}
