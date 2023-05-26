//BaekJoon_10811
//바구니 뒤집기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 58.234%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	int* result = new int[n + 1];

	for (int i = 1; i <= n; i++) {
		result[i] = i;
	}

	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;

		for (int j = 0; j <= (b - a) / 2; j++) {
			swap(result[j + a], result[b - j]);
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << result[i] << ' ';
	}
}
