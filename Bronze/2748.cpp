//BaekJoon_2748
//피보나치 수 2

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 40.478%
*/

#include<iostream>

using namespace std;

long long sum[91]{ 0, 1, 1};

long long Fibo(int a) {
	if (a == 0 || a == 1) {
		return sum[a];
	}
	else if (sum[a] == 0) {
		sum[a] = Fibo(a - 1) + Fibo(a - 2);
	}
	return sum[a];
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	cout << Fibo(n);
}
