//BaekJoon_1032
//명령 프롬프트


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 55.083%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	
	std::string s;

	std::cin >> n >> s;

	std::string result = s;

	for (int i = 1; i < n; i++) {
		
		std::string temp;

		std::cin >> temp;

		for (int j = 0; j < s.length(); j++) {
			if (s[j] != temp[j]) {
				result[j] = '?';
			}
		}
	}
	
	std::cout << result << '\n';
	
	return 0;
}
