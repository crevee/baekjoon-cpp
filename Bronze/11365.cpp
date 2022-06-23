//BaekJoon_11365
//!밀비 급일

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 63.991%
*/

#include <iostream>
#include <string>


int main() {
	std::string input_string = {};


	while(1)
	{
		std::getline(std::cin, input_string);

		if (input_string == "END")
			break;

		for (int i = input_string.length() - 1; i >= 0; i--)
		{
			std::cout << input_string[i];
		}
		std::cout << "\n";
	}
	return 0;
}
