//BaekJoon_10769
//행복한지 슬픈지

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 64.024%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	int sad = 0, happy = 0;

	getline(cin, s);

	for (size_t i = 0; i < s.size(); i++) {
		if (s[i] == ':' && s[i + 1] == '-') {
			if(s[i + 2] == ')'){
				happy++;
			}
			else if (s[i + 2] == '(') {
				sad++;
			}
		}
	}

	if (sad == 0 && happy == 0) {
		cout << "none";
	}
	else if (sad != 0 && sad == happy) {
		cout << "unsure";
	}
	else if (happy > sad) {
		cout << "happy";
	}
	else {
		cout << "sad";
	}

	return 0;
}
