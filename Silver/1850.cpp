//BaekJoon_1850
//최대공약수


/*
* 제한 시간 : 164ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 34.445%
*/

#include <iostream>

using namespace std;

long long GCD(long long a, long long b) {
	return a % b ? GCD(b, a % b) : b;
}

int main(void) {

	long long a, b;

	cin >> a >> b;

	long long n = GCD(a, b);

	while (n--) {
		cout << "1";
	}

	return 0;
}
