//BaekJoon_10986
//나머지 합

/*
* 제한 시간 : 160ms / 1s
* 메모리 제한 : 9836KB / 256MB
* 정답 비율 : 26.869%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	long long result = 0;

	cin >> n >> m;

	vector<long long> v(n + 1);
	vector<long long> c(m);

	for (int i = 1; i <= n; i++) {
		cin >> v[i];

		v[i] = v[i - 1] + v[i];
	}

	for (int i = 1; i <= n; i++) {
		v[i] = v[i] % m;

		if (v[i] == 0) {
			result++;
		}
		c[v[i]]++;
	}

	for (int i = 0; i < m; i++) {
		if (c[i] > 1) {
			result = result + (c[i] * (c[i] - 1) / 2);
		}
	}
	cout << result;

	return 0;
}
