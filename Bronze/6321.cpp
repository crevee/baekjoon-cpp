//BaekJoon_6321.cpp
//IBM 빼기 1

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 50.245%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0;
	std::string name;


	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> name;

		for (int j = 0; j < name.size(); j++)
		{	
			if (name[j] == 'Z')
			{
				name[j] = 65;
			}
			else
			{
				name[j] += 1;
			}
		}

		std::cout << "String #" << i + 1 << "\n" << name << "\n\n";
	}

	return 0;

}
