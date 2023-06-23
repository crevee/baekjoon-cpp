//BaekJoon_2576
//홀수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 55.885%
*/

#include <iostream>

int main() {
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int result = 0, min_result = 101;

	for (int i = 0; i < 7; i++) {
		int temp;

		cin >> temp;

		if (temp % 2 == 1) {
			result += temp;
			
			if (temp < min_result) {
			min_result = temp;
			}
		}
	}

	if (result == 0) {
		cout << "-1";
		
		return 0;
	}

	cout << result << "\n" << min_result;
}
