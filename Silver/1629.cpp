//BaekJoon_1629
//곱셈

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 26.613%
*/

#include<iostream>

using namespace std;

long long a, b, c;

long long FPow(long long a, long long b) {
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return a % c;
	}

	long long temp = FPow(a, b / 2);

	if (b % 2 == 0) {
		return (temp * temp) % c;
	}
	else {
		return((temp * temp) % c) * a % c;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b>> c;

	FPow(a, b);
	cout << FPow(a, b);
}
