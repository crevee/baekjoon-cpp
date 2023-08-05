//BaekJoon_10799
//쇠막대기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2300KB / 256MB
* 정답 비율 : 64.728%
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	stack<char> s;
	string input;

	int total = 0;

	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '(') {
			s.push(input[i]);
		}
		else if (input[i] == ')' && input[i - 1] == '(') {
			s.pop();
			total += s.size();
		}
		else {
			total++;
			s.pop();
		}
	}
	cout << total;

	return 0;
}
