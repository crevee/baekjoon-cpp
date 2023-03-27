//BaekJoon_11689
//GCD(n, k) = 1

/*
* 제한 시간 : 16ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 37.949%
*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n;

	cin >> n;

	long result = n;

	for (long p = 2; p <= sqrt(n); p++) {
		if (n % p == 0) {
			result = result - result / p;
			while (n % p == 0) {
				n = n / p;
			}
		}
	}

	if (n > 1) {
		result = result - result / n;
	}
	cout << result << "\n";
}
