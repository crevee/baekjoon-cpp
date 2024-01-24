//BaekJoon_11720
//숫자의 합

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 55.644%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	long long result = 0;
	string s;

	cin >> n >> s;

	for (int i = 0; i < n; i++) {
		result += s[i] - '0';
	}

	cout << result;

	return 0;
}
