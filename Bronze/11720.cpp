//BaekJoon_11720
//팩토리얼

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 54.677%
*/

#include <iostream>
#include <string>

int main() {

	int N = 0, answer = 0;
	std::string list;
	
	std::cin >> N >> list;


	for (int i = 0; i < N; i++)
	{
		answer += (list[i]) - '0';	//'0' 아스키 48
	}
	std::cout << answer;

	return 0;
}
