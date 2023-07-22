//BaekJoon_2304
//창고 다각형

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 41.571%
*/

#include <iostream>

using namespace std;

int Max(int a, int b) {
	return a > b ? a : b;
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, max_position = 0, max_hight = 0, left, hight, result = 0;
	int a[1001]{};

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> left >> hight;
		a[left] = hight;

		if (max_hight < hight) {
			max_position = left;
			max_hight = hight;
		}
	}

	int left_highest = 0;

	for (int i = 1; i < max_position; i++) {
		left_highest = Max(left_highest, a[i]);
		result += left_highest;
	}

	int right_highest = 0;

	for (int i = 1000; i > max_position; i--) {
		right_highest = Max(right_highest, a[i]);
		result += right_highest;
	}

	cout << result + max_hight;

	return 0;
}
