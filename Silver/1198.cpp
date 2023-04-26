//BaekJoon_1198
//삼각형으로 자르기

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 53.383%
*/

#include<iostream>

using namespace std;

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, answer = 0, x[35], y[35];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				answer = Max(answer, 
					abs(x[i] * y[j] + x[j] * y[k] + x[k] * y[i]
					- x[j] * y[i] - x[k] * y[j] - x[i] * y[k]));
			}
		}
	}

	if (answer % 2) {
		cout << answer / 2 << ".5";
	}
	else {
		cout.precision(2);
		cout << answer / 2 << ".0";
	}
}
