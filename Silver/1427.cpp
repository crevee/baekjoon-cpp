//BaekJoon_1427.cpp
//소트인사이드


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 64.062%
*/

#include <iostream>


int main() {

	std::cin.tie(0);


	std::string n;

	std::cin >> n;

	for(int i = 0; i < n.length(); i++)
	{
		for (int j = 0; j < n.length() - 1; j++)
		{
			if (n[j] < n[j + 1])
			{
				int tmp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = tmp;
			}
		}
	}
	std::cout << n;

	return 0;
}
