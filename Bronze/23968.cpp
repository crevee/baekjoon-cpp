//BaekJoon_23968.cpp
//알고리즘 수업 - 버블 정렬 1

/*
* 제한 시간 : 168ms / 1s
* 메모리 제한 : 2180KB / 512MB
* 정답 비율 : 45.507%
*/

#include <iostream>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k, count = 0;

	std::cin >> n >> k;

	int* a;
	a = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j +1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;

				count++;

				if (count == k)
				{
					std::cout << a[j] << ' ' << a[j + 1];
				}
			}
		}
	}

	if (count < k)
	{
		std::cout << "-1";
	}

	return 0;
}
