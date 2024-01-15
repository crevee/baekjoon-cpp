//BaekJoon_2502
//떡 먹는 호랑이

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 52.309%
*/

#include <iostream>

using namespace std;

int Fibo(int n) {
	int dp[2]{ 0, 1 };

	for (int i = 1; i <= n / 2; i++) {
		dp[0] += dp[1];
		dp[1] += dp[0];
	}

	return dp[n% 2 == 1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int d, k;

	cin >> d >> k;

	int x = Fibo(d), y = Fibo(d - 1);

	for (int a = 1; a <= k / x; a++) {
		if ((k - a * x) % y == 0) {
			int b = (k - a * x) / y + a;

			cout << a << '\n' << b;

			break;
		}
	}
	return 0;
}
