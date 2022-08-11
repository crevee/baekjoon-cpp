//BaekJoon_2577
//숫자의 개수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 58.203%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a, b, c, sum = 0;

	int arr[10]{ 0 };

	std::cin >> a >> b >> c;

	sum = a * b * c;

	while (sum > 0)
	{
		arr[sum % 10]++;
		sum /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << '\n';
	}
	return 0;
}
