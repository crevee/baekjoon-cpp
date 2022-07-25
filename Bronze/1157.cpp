//BaekJoon_1157.cpp
//평균

/*
* 제한 시간 : 8ms / 2s
* 메모리 제한 : 2996KB / 128MB
* 정답 비율 : 39.253%
*/

#include <iostream>

char str[1000001];

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	char answer = '0';
	int count[26]{ 0 }, max = 0;

	std::cin.getline(str, 1000001);


	for (int i = 0; i < std::size(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			count[str[i] - 'a']++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			count[str[i] - 'A']++;
		}
	}

	for (int i = 0; i < std::size(count); i++)
	{
		if (count[i] == max)
		{
			answer = '?';
		}
		else if (count[i] > max)
		{
			max = count[i];
			answer = 'A' + i;
		}
	}

	std::cout << answer;

	return 0;
}
