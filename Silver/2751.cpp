//BaekJoon_2751.cpp
//수 정렬하기 2


/*
* 제한 시간 : 272ms / 2s
* 메모리 제한 : 5928KB / 256MB
* 정답 비율 : 30.398%
*/

#include <iostream>
#include <algorithm>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int n;
	int* number;

	std::cin >> n;

	number = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> number[i];
	}

	std::sort(number, number + n);

	
	for (int i = 0; i < n; i++)
	{
		std::cout << number[i] << '\n';
	}

	return 0;
}
