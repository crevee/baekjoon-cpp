//BaekJoon_1264.cpp
//모음의 개수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 60.304%
*/

#include <iostream>
#include<string>

int main() {

	std::string N;
	int count = 0;


	while(N != "#")
	{
		std::getline(std::cin, N);

		if (N == "#") break;

		for (int i = 0; i < N.size(); i++)
		{
			if (N[i] == 'a') count++;
			if (N[i] == 'e') count++;
			if (N[i] == 'i') count++;
			if (N[i] == 'o') count++;
			if (N[i] == 'u') count++;
			if (N[i] == 'A') count++;
			if (N[i] == 'E') count++;
			if (N[i] == 'I') count++;
			if (N[i] == 'O') count++;
			if (N[i] == 'U') count++;
		}

		std::cout << count << std::endl;
		count = 0;
	}

	return 0;
}
