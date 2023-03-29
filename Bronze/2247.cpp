//BaekJoon_2247
//피보나치 수


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 48.832%
*/

#include<iostream>

using namespace std;

static int D[45];

int Fibo(int num) {
	if (D[num] != -1) {
		return D[num];
	}
	return D[num] = Fibo(num - 2) + Fibo(num - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i <= n; i++) {
		D[i] = -1;
	}

	D[0] = 0;
	D[1] = 1;

	Fibo(n);

	cout << D[n];
}
