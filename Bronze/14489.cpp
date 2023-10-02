//BaekJoon_14489
//치킨 두마리(...)

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 61.231%
*/

#include<iostream>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long a, b, c;

	cin >> a >> b;

	cin >> c;

	if (a + b >= 2 * c) {
		cout << (a + b) - 2 * c;
	}
	else {
		cout << a + b;
	}

	return 0;
}
