//BaekJoon_11655
//ROT13

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 61.248%
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	getline(cin , s);

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];

		if (c >= 'a' && c <= 'z') {
			if (c - 'a' < 13) {
				c += 13;
			}
			else {
				c -= 13;
			}
		}
		else if (c >= 'A' && c <= 'Z') {
			if (c - 'A' < 13) {
				c += 13;
			}
			else {
				c -= 13;
			}
		}
		s[i] = c;
	}
	cout << s << '\n';
}
