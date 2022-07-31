//BaekJoon_23969.cpp
//알고리즘 수업 - 버블 정렬 2

/*
* 제한 시간 : 388ms / 1s
* 메모리 제한 : 2180KB / 512MB
* 정답 비율 : 64.400%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k, count = 0;
	int* a;

	std::cin >> n >> k;
	
	a = new int[n];


	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1] && count < k)
			{
				int tmp = a[j];
				a[j] = a[j +1];
				a[j + 1] = tmp;

				count++;
			}
		}
	}

	if (count < k)
	{
		std::cout << "-1";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << a[i] << ' ';
		}
	}

	return 0;
}
