//BaekJoon_24416
//알고리즘 수업 - 피보나치 수 1

/*
* 제한 시간 : 212ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 59.340%
*/

#include<iostream>

using namespace std;

int cnt_1 = 0, cnt_2 = 0;

int Fib(int n) {
	if (n == 1 || n == 2) {
		cnt_1++;
		return 1;
	}
	else {
		return (Fib(n - 1) + Fib(n - 2));
	}
}

int main(void) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	Fib(n);

	int a[41]{};

	a[1] = 1, a[2] = 1;

	for (int i = 3; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
		cnt_2++;
	}
	cout << cnt_1 << " " << cnt_2;

	return 0;
}
