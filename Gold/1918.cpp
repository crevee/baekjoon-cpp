//BaekJoon_1918
//후위 표기식

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2028KB / 128MB
* 정답 비율 : 36.988%
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int Priority(char& ch) {
	if (ch == '+' || ch == '-') {
		return 1;
	}
	if (ch == '*' || ch == '/') {
		return 2;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	stack<char> st;
	char c;
	string s, result;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		c = s[i];

		if (c >= 'A' && c <= 'Z') {
			result += c;
			continue;
		}

		if (st.empty() || c == '(') {
			st.emplace(c);
			continue;
		}

		if (c == ')') {
			while (st.top() != '(') {
				result += st.top();
				st.pop();
			}
			st.pop();
			continue;
		}

		if (Priority(st.top()) < Priority(c)) {
			st.emplace(c);
		}
		else {
			while (!st.empty() && Priority(st.top()) >= Priority(c)) {
				result += st.top();
				st.pop();
			}
			st.emplace(c);
		}
	}

	while (!st.empty()) {
		result += st.top();
		st.pop();
	}
	cout << result;

	return 0;
}
