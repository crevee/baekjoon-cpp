//BaekJoon_12904
//A와 B

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 46.964%
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s, t;
	bool result = 0;

	cin >> s >> t;

	while (1) {
		if (s.size() == t.size()) {
			if (s == t) {
				result = 1;
			}
			break;
		}

		if (t[t.size() - 1] == 'A') {
			t.pop_back();
		}
		else {
			t.pop_back();
			reverse(t.begin(), t.end());
		}
	}
	cout << result;

	return 0;
}
