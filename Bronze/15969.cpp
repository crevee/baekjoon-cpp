//BaekJoon_15969
//행복


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 72.196%
*/

#include <iostream>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	int* arr;

	std::cin >> n;

	arr = new int[n];


	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	std::sort(arr, arr + n);

	std::cout << arr[n - 1] - arr[0];

	return 0;
}
