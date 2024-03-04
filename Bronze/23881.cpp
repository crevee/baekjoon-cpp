//BaekJoon_23881
//알고리즘 수업 - 선택 정렬 1

/*
* 제한 시간 : 36ms / 1s
* 메모리 제한 : 2180KB / 512MB
* 정답 비율 : 38.916%
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;

	cin >> n >> k;

	vector<int>v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int num = 0;

	for (int i = n - 1; i >= 0; i--) {
		int m = v[0];
		int max_value = 0;

		for (int j = 0; j < i; j++) {
			if (m < v[j]) {
				m = v[j];
				max_value = j;
			}
		}

		int a, b;

		if (v[max_value] > v[i]) {
			int cnt = v[i];

			v[i] = v[max_value];
			v[max_value] = cnt;

			a = v[max_value], b = v[i];

			num++;

			if (num == k) {
				cout << a << ' ' << b << '\n';
				return 0;
			}
		}
	}

	cout << -1 << '\n';
}
