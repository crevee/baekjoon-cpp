//BaekJoon_2506
//점수계산

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 77.075%
*/

#include <iostream>

int main() {
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0, score = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;

		cin >> temp;

		if (temp == 1) {
			score++;
			result += score;
		}
		else {
			score = 0;
		}
	}
	cout << result;
}
