//BaekJoon_2504
//괄호의 값

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 29.531%
*/

#include<iostream>
#include<string>
#include<stack>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string str;
	std::stack<char> s;

	std::cin >> str;

	int answer = 0, temp = 1;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			temp *= 2;
			s.push('(');
		}
		else if (str[i] == '[') {
			temp *= 3;
			s.push('[');
		}
		else if (str[i] == ')') {
			if (s.empty() || s.top() != '(') {
				answer = 0;
				break;
			}
			if (str[i - 1] == '(') {
				answer += temp;
				temp /= 2;
				s.pop();
			}
			else {
				temp /= 2;
				s.pop();
			}
		}
		else if (str[i] == ']') {
			if (s.empty() || s.top() != '[') {
				answer = 0;
				break;
			}
			if (str[i - 1] == '[') {
				answer += temp;
				temp /= 3;
				s.pop();
			}
			else {
				temp /= 3;
				s.pop();
			}
		}
	}

	if (!s.empty()) {
		answer = 0;
	}
	std::cout << answer;
}
