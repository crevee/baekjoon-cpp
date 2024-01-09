//BaekJoon_27866
//문자와 문자열

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 1024MB
* 정답 비율 : 68.402%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	int i;
	cin >> s >> i;

	cout << s[i - 1];
	
	return 0;
}
