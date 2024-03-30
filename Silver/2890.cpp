//BaekJoon_2890
//카약


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 53.180%
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int r, c, cnt = 1;
	int rank[10]{ 0 };

	bool check = false;

	vector<string> v;

	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		string s;

		cin >> s;

		v.emplace_back(s);
	}

	for (int i = c - 2; i >= 1; i--) {
		for (int j = 0; j < r; j++) {
			int tmp = v[j][i] - '0';

			if (!rank[tmp] && tmp != '.') {
				rank[tmp] = cnt;
				check = true;
			}
		}
		if (check) {
			cnt++;
		}
		check = false;
	}

	for (int i = 1; i <= 9; i++) {
		cout << rank[i] << '\n';
	}
}
