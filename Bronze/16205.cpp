//BaekJoon_16205
//변수명

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 53.498%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string s, camel, snake, pascal;

	cin >> n >> s;

	if (n == 1) {
		camel = s;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= 'a' && s[i] <= 'z') {
				snake += s[i];
			}
			else {
				snake += '_';
				char tmp = (s[i] + 32);
				snake += tmp;
			}
		}

		pascal = s;
		pascal[0] -= 32;
	}

	if (n == 2) {
		bool check = false;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '_') {
				check = true;
				continue;
			}
			else if (check) {
				camel += (s[i] - 32);
				check = false;
			}
			else {
				camel += s[i];
			}
		}
		
		snake = s;
		pascal = camel;
		pascal[0] -= 32;
	}

	if (n == 3) {
		camel = s;
		camel[0] += 32;
		
		for (int i = 0; i < s.size(); i++) {
			if (i == 0) {
				snake += (s[i] + 32);
			}
			else if (s[i] >= 'a' && s[i] <= 'z') {
				snake += s[i];
			}
			else {
				snake += "_";
				char tmp = (s[i] + 32);
				snake += tmp;
			}
		}
		pascal = s;
	}

	cout << camel << '\n' << snake << '\n' << pascal;
	return 0;
}
