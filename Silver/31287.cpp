//BaekJoon_31287
//장난감 강아지


/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2024KB / 1024MB
* 정답 비율 : 21.403%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	int x = 0, y = 0;

	string s;

	cin >> n >> k;

	cin >> s;

	if (k > (n >> 1)) {
		k = (n >> 1);
	}

	for (int i = 0; i < k; i++) {
		for (char c : s) {
			switch (c) {
			case 'U':
				y++;

				if (x == 0 && y == 0) {
					cout << "YES";
					return 0;
				}
				break;
			case 'D':
				y--;

				if (x == 0 && y == 0) {
					cout << "YES";

					return 0;
				}
				break;
			case 'L':
				x--;

				if (x == 0 && y == 0) {
					cout << "YES";

					return 0;
				}
				break;
			case 'R':
				x++;

				if (x == 0 && y == 0) {
					cout << "YES";

					return 0;
				}
				break;
			}
		}
	}
	cout << "NO";

	return 0;
}
