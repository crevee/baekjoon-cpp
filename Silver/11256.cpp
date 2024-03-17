//BaekJoon_11256
//사탕


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 68.731%
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int j, n;
		vector<int> v;

		cin >> j >> n;

		for (int k = 0; k < n; k++) {
			int r, c;

			cin >> r >> c;

			v.emplace_back(r * c);
		}

		sort(v.begin(), v.end());

		int result = 0;

		for (int i = n - 1; i > 0; i--) {
			j -= v[i];
			result++;

			if (j <= 0) {
				break;
			}
		}

		cout << result << '\n';
	}
}
