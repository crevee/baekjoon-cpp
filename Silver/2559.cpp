//BaekJoon_2559
//수열

/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2412KB / 128MB
* 정답 비율 : 36.136%
*/

#include<iostream>

int n, k, temp, result = -987654321;
int sum[100001]{};

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		std::cin >> temp;
		
		sum[i] = sum[i - 1] + temp;
	}

	for (int i = k; i <= n; i++) {
		result = Max(result, sum[i] - sum[i - k]);
	}
	std::cout << result;
}
