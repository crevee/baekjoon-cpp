//BaekJoon_10569
//다면체

/*
* 제한 시간 : 0ms / 5s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 88.220%
*/

#include <iostream>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, v, e;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> v >> e;
		cout << 2 - v + e << "\n";
	}
}
