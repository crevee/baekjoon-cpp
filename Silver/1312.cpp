//BaekJoon_1312
//소수


/*
* 제한 시간 : 8ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 34.270%
*/

#include <iostream>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, n, result = 0;

	cin >> a >> b >> n;

	if (a % b == 0) {
		cout << 0;

		return 0;
	}

	if (a > b) {
		a = a % b;
	}

	for (int i = 0; i < n; i++) {
		a *= 10;
		result = a / b;
		a = a % b;
	}

	cout << result;

	return 0;
}
