//BaekJoon_2166
//다각형의 면적

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2176KB / 128MB
* 정답 비율 : 29.528%
*/

#include <iostream>

using namespace std;

long x[10001], y[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}

	x[n] = x[0];
	y[n] = y[0];

	double result = 0;

	for (int i = 0; i < n; i++) {
		result += (x[i] * y[i + 1]) - (x[i + 1] * y[i]);
	}

	cout << fixed;
	cout.precision(1);
	cout << abs(result) / 2.0;
}
