//BaekJoon_2857
//FBI
/*
* 제한 시간 : 0ms / 0.25s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 48.364%
*/

#include <iostream>
#include <vector>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string name;
	std::vector<int> result;


	for (int i = 0; i < 5; i++)
	{
		std::cin >> name;

		for (int j = 0; j < name.size(); j++)
		{
			if (j + 2 < size(name) &&
				name[j] == 'F' && name[j + 1] == 'B' && name[j + 2] == 'I')
			{
				result.push_back(i+1);
				break;
			}
		}
	}

	if (result.empty())
	{
		std::cout << "HE GOT AWAY!";
	}

	for (int k = 0; k < result.size(); k++)
	{	
		std::cout << result[k] << " ";
	}

	return 0;
}
