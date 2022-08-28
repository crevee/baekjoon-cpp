//BaekJoon_1026
//보물

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 66.345%
*/

#include <iostream>
#include <algorithm>

bool desc(int a, int b)
{
	return a > b;
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, s = 0;
	int* a;
	int* b;
	
	std::cin >> n;

	a = new int[n];
	b = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	for (int j = 0; j < n; j++)
	{
		std::cin >> b[j];
	}

	std::sort(a, a + n);
	std::sort(b, b + n, desc);

	for (int k = 0; k < n; k++)
	{
		s += (a[k] * b[k]);
	}

	std::cout << s;

	return 0;
}
