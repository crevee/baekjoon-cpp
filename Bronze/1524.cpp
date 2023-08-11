//BaekJoon_1524
//세준세비

/*
* 제한 시간 : 48ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 48.835%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, m, p = 0, q = 0, temp;

		cin >> n >> m;

		while (n--) {
			cin >> temp;
			p = max(temp, p);
		}

		while (m--) {
			cin >> temp;
			q = max(temp, q);
		}
		cout << (p < q ? "B" : "S") << '\n';
	}
}
