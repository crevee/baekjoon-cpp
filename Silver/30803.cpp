//BaekJoon_30803
//수도꼭지

/*
* 제한 시간 : 108ms / 2s
* 메모리 제한 : 2996KB / 1024MB
* 정답 비율 : 49.214%
*/

#include <iostream>

using namespace std;

int a[200001];
bool check[200001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, q;
	long long result = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		result += a[i];
	}

	cin >> q;

	cout << result << '\n';

	for (int i = 0; i < q; i++) {
		int order;

		cin >> order;

		int x, y;

		if (order == 2) {
			cin >> x;

			if (check[x] == 1) {
				check[x] = 0;
				result += a[x];
			}
			else {
				check[x] = 1;
				result -= a[x];
			}
			cout << result << '\n';
		}
		else {
			cin >> x >> y;

			if (check[x] == 0) {
				result -= a[x];
			}

			a[x] = y;

			if (check[x] == 0) {
				result += a[x];
			}

			cout << result <<'\n';
		}
	}
	return 0;
}
