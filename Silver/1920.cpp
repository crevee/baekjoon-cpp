//BaekJoon_1920.cpp
//수 찾기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 29.847
*/

#include <iostream>
#include <algorithm>

int n, m, num;
int* a;

int search(int key) {

	int start = 0;
	int end = n - 1;
	int mid;


	while (end >= start)
	{
		mid = (start + end) / 2;

		if (a[mid] == key)
		{
			std::cout << 1 << '\n';

			return 0;
		}
		else if (a[mid] > key)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	std::cout << 0 << '\n';
	
	return 0;
}


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	std::cin >> n;

	a = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::sort(a, a + n);

	std::cin >> m;

	for (int j = 0; j < m; j++)
	{
		std::cin >> num;

		search(num);
	}

	return 0;
}
