//BaekJoon_11721
//열 개씩 끊어 출력하기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 69.891%
*/

#include<iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string n;
	std::cin >> n;

	for (int i = 0; i < n.size(); i++)
	{
		if ((i+1) % 10 == 0)
		{
			std::cout << n[i] << "\n";
		}
		else
		{
			std::cout << n[i];
		}
	}
	
	return 0;
}
