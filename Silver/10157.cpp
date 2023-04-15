//BaekJoon_10157
//자리배정


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 5864KB / 256MB
* 정답 비율 : 38.259%
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int c, r, k, x, y, count = 1;
	int dir[4][2] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} }, d = 0;

	cin >> c >> r >> k;

	if (k > c * r) {
		cout << 0;
	}
	else {
		vector<vector<int>>seat(r, vector<int>(c, 0));
		y = r - 1, x = 0;

		while (count < k) {
			int dx = x + dir[d][0];
			int dy = y + dir[d][1];

			if (dx < 0 || dx >= c || dy < 0 || dy >= r || seat[dy][dx] != 0) {
				d = (d + 1) % 4;
				continue;
			}
			seat[y][x] = count++;
			y = dy, x = dx;
		}
		cout << x + 1 << " " << r - y;
	}
}
