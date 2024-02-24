//BaekJoon_17247
//택시 거리

/*
* 제한 시간 : 44ms / 1s
* 메모리 제한 : 2996KB / 256MB
* 정답 비율 : 69.541%
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool map[1000][1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	vector<int> v;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];

			if (map[i][j] == 1) {
				v.emplace_back(i);
				v.emplace_back(j);
			}
		}
	}

	cout << abs(v[2] - v[0]) + abs(v[3] - v[1]);

	return 0;
}
