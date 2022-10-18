//BaekJoon_11004
//K번째 수

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 40.032%
*/

#include <iostream>
#include <algorithm>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	int n, k;

	std::cin >> n >> k;

	int* a;
	a = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::sort(a, a + n);

	std::cout << a[k - 1];


	return 0;
}
