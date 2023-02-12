//BaekJoon_2501
//약수 구하기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 47.342%
*/

#include<iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k;

	std::cin >> n >> k;


	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			k--;
			if (k == 0) {
				std::cout << i;
				return 0;
			}
		}
	}
	std::cout << '0';
}
