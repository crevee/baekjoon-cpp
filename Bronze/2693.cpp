//BaekJoon_2693
//n번째 큰 수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 32MB
* 정답 비율 : 76.633%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	int a[10];

	cin >> t;

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> a[j];
		}
		sort(a, a + 10);
		cout << a[7] << '\n';
	}
	return 0;
}
