//BaekJoon_1173
//운동

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 41.406%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, M, m, t, r;
	int minute = 0, pulse;

	cin >> n >> m >> M >> t >> r;

	if (M - m < t) {
		cout << -1;
		return 0;
	}

	pulse = m;

	while (1) {
		if (pulse + t <= M) {
			pulse += t;
			n--;
		}
		else {
			pulse -= r;
			if (pulse < m) {
				pulse = m;
			}
		}
		minute++;

		if (n == 0) {
			cout << minute;
			return 0;
		}
	}
}
