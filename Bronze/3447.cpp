//BaekJoon_3447
//버그왕

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2176KB / 128MB
* 정답 비율 : 41.945%
*/

#include <iostream>
#include <regex>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;

	while (getline(cin, s)) {
		while (s.find("BUG") != -1) {
			s = regex_replace(s, regex("BUG"), "");
		}
		cout << s << '\n';
	}
}
