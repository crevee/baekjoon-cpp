//BaekJoon_30802
//웰컴 키트

/*
* 제한 시간 : 0ms / 0.1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 67.066%
*/

#include <iostream>

using namespace std;

long long result = 0;

void TSum(long long& a, long long& b) {
	if (a % b == 0) {
		result += a / b;
	}
	else {
		result += a / b + 1;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, s, m, l, xl, xxl, xxxl, t, p;

	cin >> n;

	cin >> s >> m >> l >> xl >> xxl >> xxxl;

	cin >> t >> p;

	TSum(s, t);
	TSum(m, t);
	TSum(l, t);
	TSum(xl, t);
	TSum(xxl, t);
	TSum(xxxl, t);

	cout << result << '\n';

	cout << n / p << ' ' << n % p;

	return 0;
}

