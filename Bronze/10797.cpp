//BaekJoon_10797
//10부제

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 81.876%
*/

#include <iostream>

int main() {
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int day, result = 0;

	cin >> day;

	for (int i = 0; i < 5; i++) {
		int temp;

		cin >> temp;

		if (day == temp) {
			result++;
		}
	}
	cout << result;
}
