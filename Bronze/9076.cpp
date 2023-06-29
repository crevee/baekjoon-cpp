//BaekJoon_9076
//삼각형 외우기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 78.489%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n[5];

	cin >> t;


	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> n[j];
		}
		sort(n, n + 5);

		if (n[3] - n[1] >= 4) {
			cout << "KIN \n";
		}
		else {
			cout << n[1] + n[2] + n[3] << "\n";
		}
	}
	return 0;
}
