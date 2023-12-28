//BaekJoon_11444
//피보나치수 6

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2156KB / 256MB
* 정답 비율 : 48.242%
*/

#include <iostream>
#include <map>

using namespace std;

map<long long, long long> f;

long long Fibo(long long n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}

	if (f.count(n) > 0) {
		return f[n];
	}

	if (n % 2 == 0) {
		long long m = n / 2;
		long long tmp1 = Fibo(m - 1);
		long long tmp2 = Fibo(m);

		f[n] = ((2LL * tmp1 + tmp2) * tmp2) % 1000000007;

		return f[n];
	}

	long long m = (n + 1) / 2;
	long long tmp1 = Fibo(m);
	long long tmp2 = Fibo(m - 1);
	f[n] = (tmp1 * tmp1 + tmp2 * tmp2) % 1000000007;

	return f[n];
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long n;

	cin >> n;

	cout << Fibo(n);

	return 0;
}
