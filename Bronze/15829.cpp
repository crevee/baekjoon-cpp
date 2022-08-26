//BaekJoon_15829
//

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 31.021%
*/

#include <iostream>

long long result = 0;

int hash(std::string str)
{
	long long m = 1;

	for (int i = 0; i < str.size(); i++)
	{
		result = (result + (str[i] - 'a' + 1) * m ) % 1234567891;

		m = (m * 31) % 1234567891;
	}

	std::cout << result;

	return 0;
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int l;
	
	std::string str;


	std::cin >> l >> str;

	hash(str);
}
