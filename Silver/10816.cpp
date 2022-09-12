//BaekJoon_10816
//숫자 카드2

/*
* 제한 시간 : 336ms / 1s
* 메모리 제한 : 8296KB / 256MB
* 정답 비율 : 35.931%
*/

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> a, b;

int n, m, x;

int lower_bound(int key)
{
	int start = 0, end = n;
	int mid;

	while (end - start > 0)
	{
		mid = (start + end) / 2;

		if (a[mid] >= key)
		{
			end = mid;
		}
		else
		{
			start = mid + 1;
		}
	}
	return end;
}


int upper_bound(int key)
{
	int start = 0, end = n;
	int mid;

	while (end - start > 0)
	{
		mid = (start + end) / 2;

		if (a[mid] > key)
		{
			end = mid;
		}
		else
		{
			start = mid + 1;
		}
	}
	return end;
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		a.push_back(x);
	}

	std::cin >> m;

	for (int j = 0; j < m; j++)
	{
		std::cin >> x;
		b.push_back(x);
	}

	std::sort(a.begin(), a.end());

	for (int k = 0; k < b.size(); k++)
	{
		std::cout << upper_bound(b[k]) - lower_bound(b[k]) << ' ';
	}
	
	return 0;
}
