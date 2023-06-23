//BaekJoon_9085
//더하기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 79.816%
*/

#include <iostream>

int main() {
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;

		int result = 0;

		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			result += temp;
		}
		cout << result << "\n";
	}
}
