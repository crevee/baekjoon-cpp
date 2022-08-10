//BaekJoon_10818.cpp
//최소, 최대

/*
* 제한 시간 : 184ms / 1s
* 메모리 제한 : 5928KB / 256MB
* 정답 비율 : 42.798%
*/

#include <iostream>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	int* arr;

	std::cin >> n;

	arr = new int [n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::sort(arr, arr + n);

	std::cout << arr[0] << ' ' << arr[n - 1];

	return 0;
}
