//BaekJoon_1083
//소트

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 27.669%
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, s;

	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	cin >> s;

	int start = 0;

	while (start < n && s > 0) {
		int max_idx = start;

		for (int i = start; i <= min(n - 1, start + s); i++) {
			if (v[max_idx] < v[i]) {
				max_idx = i;
			}
		}
		for (int i = max_idx; i > start; i--) {
			swap(v[i], v[i - 1]);
			s--;
		}
		start++;
	}

	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}

	return 0;
}
