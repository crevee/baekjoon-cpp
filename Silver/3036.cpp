//BaekJoon_3036
//링

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 76.988%
*/

#include <iostream>

int Gcd(int a, int b) {
	if (b == 0) {
		return a;
	}

	return Gcd(b, a % b);
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, arr[100], gcd;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	for (int i = 1; i < n; i++) {
		gcd = Gcd(arr[0], arr[i]);
		std::cout << arr[0] / gcd << '/' << arr[i] / gcd << '\n';
	}

	return 0;
}
