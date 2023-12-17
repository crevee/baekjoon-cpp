//BaekJoon_17413
//단어 뒤집기 2

/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2452KB / 512MB
* 정답 비율 : 56.789%
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string s, result;
	stack<char> c;

	int i = 0, cnt;

	getline(cin, s);

	s += ' ';

	cnt = s.length();

	while (i <= cnt) {
		if (s[i] == '<') {
			if (!c.empty()) {
				while (!c.empty()) {
					result += c.top();
					c.pop();
				}
				result += '<';
				i++;
			}

			while (s[i] != '>')
			{
				result += s[i++];
			}
			result += s[i++];
		}
		else {
			c.emplace(s[i]);

			if (s[i] == ' ') {
				c.pop();

				while (!c.empty()) {
					result += c.top();
					c.pop();
				}
				result += ' ';
			}
			i++;
		}
	}

	for (int j = 0; j < cnt; j++) {
		cout << result[j];
	}
	return 0;
}
