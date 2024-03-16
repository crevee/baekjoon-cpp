//BaekJoon_10812
//바구니 순서 바꾸기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 62.814%
*/

#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	vector<int> v;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		v.emplace_back(i);
	}

	for (int i = 0; i < m; i++) {
		int a, b, c;

		cin >> a >> b >> c;

		rotate(v.begin() + a - 1, v.begin() + c - 1, v.begin() + b);
	}

	for (int i : v) {
		cout << i << ' ';
	}

	return 0;
}
