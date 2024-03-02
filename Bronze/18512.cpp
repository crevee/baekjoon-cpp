//BaekJoon_18512
//점프 점프

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 44.788%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y, p1, p2;

	cin >> x >> y >> p1 >> p2;

	while (1) {
		if (p1 > p2) {
			p2 += y;
		}
		else if (p1 < p2) {
			p1 += x;
		}
		else {
			cout << p1;
			break;
		}

		if (p1 > 10000 || p2 > 10000) {
			cout << -1;

			break;
		}
	}
	return 0;
}
