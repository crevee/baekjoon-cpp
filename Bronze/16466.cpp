//BaekJoon_16466
//콘서트

/*
* 제한 시간 : 156ms / 1s
* 메모리 제한 : 5928KB / 512MB
* 정답 비율 : 41.538%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		if (i + 1 < v[i]) {
			cout << i + 1;

			return 0;
		}
	}

	if (v[n - 1] == n) {
		cout << n + 1;
	}

	return 0;
}
