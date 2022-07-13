//BaekJoon_2745.cpp
//진법 변환

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2208KB / 128MB
* 정답 비율 : 56.516%
*/

#include <iostream>
#include <cmath>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int b = 0, result = 0, count = 0;
	
	std::string n;

	std::cin >> n >> b;


	for (int i = n.size() - 1; i >= 0; i--)
	{
		int temp = n[i];
		
		if ('A' <= temp && temp <= 'Z')
		{
			result += (temp - 'A' + 10) * pow(b, count);
			// 'A' - 'A' = 0
		}
		else
		{
			result += (temp - '0') * pow(b, count);
		}
		count++;
	}

	std::cout << result;

}
