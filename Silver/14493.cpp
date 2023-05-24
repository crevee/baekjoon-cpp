//BaekJoon_14493
//과일노리

/*
* 제한 시간 : 8ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 67.494%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;

		cin >> a >> b;

		if (result % (a + b) < b) {
			result += b - result % (a + b);
		}
		result++;
	}
	cout << result;
}
