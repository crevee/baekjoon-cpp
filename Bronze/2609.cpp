//BaekJoon_2609
//최대공약수와 최소공배수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 58.982%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a, b, small, gcd = 0, lcm = 0;

	std::cin >> a >> b;

	a >= b ? small = b : small = a;

	for (int i = 1; i <= small; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}

	std::cout << gcd << '\n' << a / gcd * b / gcd * gcd;

	return 0;
}
