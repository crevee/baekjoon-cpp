//BaekJoon_25379
//피하자


/*
* 제한 시간 : 148ms / 2s
* 메모리 제한 : 5928KB / 1024MB
* 정답 비율 : 31.509%
*/

#include <iostream>

using namespace std;

int a[1000000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, odd = 0, even = 0, cnt0 = 0, cnt1 = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i] % 2) {
			odd++;
			cnt0 += even;
		}
		else {
			even++;
			cnt1 += odd;
		}
	}
	cout << min(cnt0, cnt1);

	return 0;
}
