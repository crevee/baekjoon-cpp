//BaekJoon_10178
//할로윈의 사탕

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 74.534%
*/

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, c, v;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> c >> v;

		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s). \n";
	}
}
