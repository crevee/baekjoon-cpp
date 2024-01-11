//BaekJoon_10830
//행렬 제곱

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 34.611%
*/

#include <iostream>

using namespace std;

long long n;

long long a[5][5];
long long result[5][5];
long long tmp[5][5];

void Multi(long long x[5][5], long long y[5][5]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			tmp[i][j] = 0;

			for (int k = 0; k < n; k++) {
				tmp[i][j] += (x[i][k] * y[k][j]);
			}

			tmp[i][j] %= 1000;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			x[i][j] = tmp[i][j];
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long b;

	cin >> n >> b;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
		result[i][i] = 1;
	}

	while (b > 0) {
		if (b % 2 == 1) {
			Multi(result, a);
		}
		Multi(a, a);
		b /= 2;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << result[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}
