//BaekJoon_6064
//카잉 달력


/*
* 제한 시간 : 32ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 25.924%
*/

#include<iostream>

using namespace std;

void Calendar(int m, int n, int x, int y) {
	int prime_x, prime_y;

	if (x > y) {
		prime_x = x - y + 1;
		prime_y = 1;
	}
	else {
		prime_y = y - x + 1;
		prime_x = 1;
	}

	int count = 1, next_x = 1, next_y = 1;
	bool end_check = false;

	while (!end_check) {
		if (next_x == prime_x && next_y == prime_y) {
			count = count + x - prime_x;
			next_x = x;
			next_y = y;
			end_check = true;
		}
		else if (m - next_x < n - next_y) {
			next_y = next_y + m - next_x + 1;
			count = count + m - next_x + 1;
			next_x = 1;
		}
		else if (m - next_x > n - next_y) {
			next_x = next_x + n - next_y + 1;
			count = count + n - next_y + 1;
			next_y = 1;
		}
		else {
			count = count + n - next_y;
			next_x = m;
			next_y = n;
			end_check = true;
		}
	}

	if (next_x == x && next_y == y) {
		cout << count << "\n";
	}
	else {
		cout << -1 << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, m , n ,x, y;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> m >> n >> x >> y;

		Calendar(m, n, x, y);
	}
}
