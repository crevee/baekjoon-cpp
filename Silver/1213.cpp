//BaekJoon_1213
//팰린드롬 만들기


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 38.259%
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int alph[26];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string name;

	cin >> name;

	for (size_t i = 0; i < name.size(); i++) {
		alph[name[i] - 'A']++;
	}

	int err = 0;
	int mid_index = -1;

	for (int i = 0; i < 26; i++) {
		if (alph[i] > 0) {
			if (alph[i] % 2 == 1) {
				mid_index = i;
				alph[i]--;
				err++;
			}
		}
	}

	if (err > 1) {
		cout << "I'm Sorry Hansoo\n";
	}
	else {
		string result = "";
		string tmp = "";

		for (int i = 0; i < 26; i++) {
			if (alph[i] > 0) {
				for (int j = 0; j < alph[i] / 2; j++) {
					result += i + 'A';
				}
			}
		}

		tmp = result;

		reverse(tmp.begin(), tmp.end());

		if (mid_index != -1) {
			result += mid_index + 'A';
		}
		result += tmp;
		cout << result;
	}
	return 0;
}
