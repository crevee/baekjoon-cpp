//BaekJoon_2749
//피보나치 수 3

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2156KB / 128MB
* 정답 비율 : 39.299%
*/

#include <iostream>
#include <map>

using namespace std;

long long n;
map<long long, long long>dp;

long long Fibo(long long n) {
	if (n <= 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}

	if (dp.find(n) != dp.end()) {
		return dp[n];
	}
	long long int k = n / 2;

	dp[n] = (Fibo(k + 1) * Fibo(n - k) + Fibo(k) * Fibo(n - k - 1)) % 1000000;

	return dp[n];
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	cout << Fibo(n);
}
