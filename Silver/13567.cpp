//BaekJoon_13567
//로봇

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2156KB / 512MB
* 정답 비율 : 58.284%
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dx[4]{ 0, 1, 0, -1 };
int dy[4]{ 1, 0, -1, 0 };

vector<pair<string, int>> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int x = 0, y = 0, dir = 0;

	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		string order;
		int value;

		cin >> order >> value;

		v.emplace_back(order, value);
	}

	for (size_t i = 0; i < v.size(); i++) {
		string order = v[i].first;
		int value = v[i].second;

		if (order == "TURN") {
			if (value == 1) {
				dir--;

				if (dir < 0) {
					dir = 3;
				}
			}
			else {
				dir++;

				if (dir > 3) {
					dir = 0;
				}
			}
		}
		else {
			x += value * dx[dir];
			y += value * dy[dir];

			if (x < 0 || x >= m || y < 0 || y >= m) {
				cout << -1 << '\n';
				return 0;
			}
		}
	}

	cout << y << ' ' << x << '\n';

	return 0;
}
