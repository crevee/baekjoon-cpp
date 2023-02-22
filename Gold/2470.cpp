//BaekJoon_2470
//두 용액

/*
* 제한 시간 : 16ms / 1s
* 메모리 제한 : 2800KB / 128MB
* 정답 비율 : 30.194%
*/

#include<iostream>
#include<algorithm>
#include<cmath>

long long arr[100001];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	std::sort(arr, arr + n);

	int left = 0, right = n - 1;

	long long val, arr_left = arr[left], arr_right = arr[right],
			  result = arr_left + arr_right;

	while (left < right) {
		val = arr[left] + arr[right];

		if (abs(result) > abs(val)) {
			result = val;
			arr_left = arr[left];
			arr_right = arr[right];
		}
		if (val <= 0) {
			left++;
		}
		else {
			right--;
		}
	}
	std::cout << arr_left << " " << arr_right;
}
