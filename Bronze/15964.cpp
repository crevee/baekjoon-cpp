//BaekJoon_15964
//이상한 기호

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 56.711%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long a, b;

	cin >> a >> b;

	cout << (a + b) * (a - b);

	return 0;
}
