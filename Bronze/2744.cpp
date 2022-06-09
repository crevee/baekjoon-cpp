//BaekJoon_2744
//대소문자 바꾸기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 79.206%
*/

#include <iostream>
#include <string>

int main() {

	std::string s;

	std::cin >> s;
	
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		else if (s[i] >= 65 && s[i] <= 90)
		{
			s[i] += 32;
		}

		std::cout << s[i];
	}

	return 0;
}
