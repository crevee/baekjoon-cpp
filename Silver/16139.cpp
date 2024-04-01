//BaekJoon_16139
//인간 - 컴퓨터 상호작용

/*
* 제한 시간 : 144ms / 1s
* 메모리 제한 : 29892KB / 256MB
* 정답 비율 : 28.928%
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> v[26];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int q, r, l;
	
	char c;

	string s;

	cin >> s;

	for (size_t i = 0; i < s.size(); i++) {
		for (int j = 0; j < 26; j++) {
			if (i == 0) {
				int num = s[i] - 'a';

				if (num == j) {
					v[j].emplace_back(1);
				}
				else {
					v[j].emplace_back(0);
				}
			}
			else {
				int num = s[i] - 'a';

				if (num == j) {
					v[j].emplace_back(v[j][i - 1] + 1);
				}
				else {
					v[j].emplace_back(v[j][i - 1]);
				}
			}
		}
	}

	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> c >> l >> r;

		int idx = c - 'a';

		if (l == 0) {
			cout << v[idx][r] << '\n';
		}
		else {
			cout << v[idx][r] - v[idx][l - 1] << '\n';
		}
	}

	return 0;
}
