//BaekJoon_7567
//그릇

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 72.606%
*/

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	char temp;

	int result = 10;

	cin >> s;

	temp = s[0];

	for (int i = 1; i < s.length(); i++) {
		if (temp == s[i]) {
			result += 5;
		}
		else {
			result += 10;
		}
		temp = s[i];
	}
	cout << result;
}
