//BaekJoon_3273
//두 수의 합


/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2412KB / 128MB
* 정답 비율 : 34.814%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x;
	int* a;

	cin >> n;

	a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> x;

	sort(a, a+n);

	int l = 0, r = n - 1, cnt = 0;

	while (1) {
		if (l >= r) {
			break;
		}

		int sum = a[l] + a[r];

		if (sum == x) {
			cnt++;
			l++;
			r--;
		}
		else if (sum < x) {
			l++;
		}
		else {
			r--;
		}
	}
	cout << cnt;

	return 0;
}
