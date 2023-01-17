//BaekJoon_11931
//수 정렬하기 4

/*
* 제한 시간 : 276ms / 2s
* 메모리 제한 : 5928KB / 256MB
* 정답 비율 : 55.089%
*/

#include <iostream>
#include <algorithm>

int n;
int* arr;

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::cin >> n;

	arr = new int[n]{};

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	std::sort(arr, arr + n);

	for (int i = n - 1; i >= 0; i--) {
		std::cout << arr[i] << '\n';
	}
}
