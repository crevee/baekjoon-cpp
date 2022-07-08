//BaekJoon_1152.cpp
//단어의 개수

/*
* 제한 시간 : 8ms / 2s
* 메모리 제한 : 3680KB / 128MB
* 정답 비율 : 31.423%
*/

#include <iostream>
#include <string>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int count = 0;
	std::string world;

	std::getline(std::cin, world);

	for (int i = 0; i < world.size(); i++)
	{
		if (world.size() > 2 && world[i] != ' ' && world[i + 1] == ' ')
		{
			count += 1;
		}
		else if (world[0] != ' ' && world[1] == ' ')
		{
			count = 1;

			for (int j = 2; j < world.size(); j++) 
			{
				if (world[j] != ' ' && world[j + 1] == ' ')
				{
					count += 1;
				}
			}
		}
		
	}

	if (world[world.size() - 1] == ' ')
	{
		count -= 1;
	}

	std::cout << count + 1;

	return 0;

}
