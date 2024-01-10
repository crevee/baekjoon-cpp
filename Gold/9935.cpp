//BaekJoon_9935
//문자열 폭발

/*
* 제한 시간 : 36ms / 2s
* 메모리 제한 : 5224KB / 128MB
* 정답 비율 : 26.047%
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s, c4;

	cin >> s >> c4;

	for (size_t i = 0; i < s.length(); i++) {
		v.emplace_back(s[i]);

		if (v.size() >= c4.size()) {
			bool flag = true;

			if (v[v.size() - 1] == c4[c4.size() - 1]) {
				for (size_t j = 0; j < c4.size(); j++) {
					if (v[v.size() - c4.size() + j] != c4[j]) {
						flag = false;
						break;
					}
				}

				if (flag == true) {
					for (size_t k = 0; k < c4.size(); k++) {
						v.pop_back();
					}
				}
			}
		}
	}

	if (v.size() == 0) {
		cout << "FRULA";
	}
	else {
		for (auto o : v) {
			cout << o;
		}
	}
	return 0;
}
