//BaekJoon_2004
//조합 0의 개수


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 28.740%
*/

#include <iostream>

using namespace std;

long long count_2(long long n) {
	long long cnt = 0;

	for (long long i = 2; i <= n; i *= 2) {
		cnt += n / i;
	}
	return cnt;
}

long long count_5(long long n) {
	long long cnt = 0;

	for (long long i = 5; i <= n; i *= 5) {
		cnt += n / i;
	}
	return cnt;
}

long long Min(long long n, long long m) {
	return n > m ? m : n;
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, m;

	cin >> n >> m;

	cout << Min(count_5(n) - count_5(m) - count_5(n - m),
		count_2(n) - count_2(m) - count_2(n - m));

	return 0;
}
