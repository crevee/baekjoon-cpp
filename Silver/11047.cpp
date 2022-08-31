//BaekJoon_11047
//동전 0

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 51.838%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k, cnt = 0;
	int* a;

	std::cin >> n >> k;

	a = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cnt += k / a[i];
		k = k % a[i];
	}

	std::cout << cnt;

	return 0;
}
