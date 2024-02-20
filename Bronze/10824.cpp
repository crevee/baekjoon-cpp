//BaekJoon_10824
//네 수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 45.525%
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a, b, c, d;

	cin >> a >> b >> c >> d;

	cout << stoll(a + b) + stoll(c + d);

	return 0;
}
