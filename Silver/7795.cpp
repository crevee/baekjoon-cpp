//BaekJoon_7795
//먹을 것인가 먹힐 것인가

/*
* 제한 시간 : 28ms / 1s
* 메모리 제한 : 2296KB / 256MB
* 정답 비율 : 50.157%
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n ,m;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> m;

		vector<int> a(n);
		vector<int> b(m);

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		int answer = 0, mid = 0;

		for (int i = 0; i < n; i++) {
			while ((mid < m) && (a[i] > b[mid])) {
				mid++;
			}
			answer += mid;
		}
		cout << answer << '\n';
	}
	return 0;
}
