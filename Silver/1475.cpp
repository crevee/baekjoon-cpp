//BaekJoon_1475.cpp
//방 번호

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 44.349%
*/

#include <iostream>
#include <algorithm>

int FindSetNumber(std::string n) {

	int count[11]{ 0 };

	for (int i = 0; i < n.size(); i++)
	{
		count[n[i] - '0']++;
	}

	int result = 0;

	for (int i = 0; i < 10; i++)
	{
		if (i != 9 && i != 6)
		{
			result = std::max(result, count[i]);
		}
	}
	
	return std::max(result, (count[6] + count[9] + 1) / 2);
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string n;

	std::cin >> n;
	std::cout << FindSetNumber(n);

	return 0;
}
