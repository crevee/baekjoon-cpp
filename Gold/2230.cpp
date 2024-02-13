//BaekJoon_2230
//수 고르기

/*
* 제한 시간 : 20ms / 2s
* 메모리 제한 : 2288KB / 128MB
* 정답 비율 : 30.549%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, result = 2e9 + 1;
	int a[100001];

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int start = 0, end = 1;

	sort(a, a + n);

	while (start < n) {
		if (a[end] - a[start] < m) {
			end++;
			continue;
		}

		if (a[end] - a[start] == m) {
			cout << m;

			return 0;
		}

		result = min(result, a[end] - a[start]);
		start++;
	}
	cout << result;

	return 0;
}
