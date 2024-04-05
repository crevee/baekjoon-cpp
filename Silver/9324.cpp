//BaekJoon_9324
//진짜 메시지

/*
* 제한 시간 : 28ms / 1s
* 메모리 제한 : 2512KB / 256MB
* 정답 비율 : 37.618%
*/

#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		char alpha[26]{ 0, };

		string s;

		bool check = true;

		cin >> s;

		for (size_t i = 0; i < s.size(); i++) {
			alpha[s[i] - 'A']++;

			if (alpha[s[i] - 'A'] == 3) {
				if (i + 1 < s.size() && s[i] == s[i + 1]) {
					i++;
					alpha[s[i] - 'A'] = 0;
				}
				else {
					check = false;
					break;
				}
			}
		}

		if (check) {
			cout << "OK\n";
		}
		else {
			cout << "FAKE\n";
		}
	}
	return 0;
}
