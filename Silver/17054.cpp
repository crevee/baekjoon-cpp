//BaekJoon_17504
//제리와 톰 2


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 87.404%
*/

#include <iostream>
#include <vector>

using namespace std;

long long Euclid(long long p, long long q) {
	return q ? Euclid(q, p % q) : p;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	long long p = 1, q = 0;

	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int tmp;

		cin >> tmp;

		v.emplace_back(tmp);
	}

	for (int i = n - 1; i > 0; i--) {

		if (q == 0) {
			q = v[i];
		}
		p = v[i - 1] * q + p;

		long long tmp;

		tmp = p;
		p = q;
		q = tmp;

		long long gcd = Euclid(p, q);

		if (gcd >= 2) {
			p = p / gcd;
			q = q / gcd;
		}
	}

	long long gcd = Euclid(q - p, q);

	cout << (q - p) / gcd << ' ' << q / gcd;

	return 0;
}
