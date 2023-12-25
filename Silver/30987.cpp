//BaekJoon_30987
//하루 피부과

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 85.623%
*/

#include <iostream>

using namespace std;

int a, b, c, d, e;

int Cal(int& x) {
	return a * (x * x * x) / 3 + (b - d) * (x * x) / 2 + (c - e) * x;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int x1, x2;

	cin >> x1 >> x2;
	cin >> a >> b >> c >> d >> e;

	cout << Cal(x2) - Cal(x1);

	return 0;
}
