//BaekJoon_11170
//0의 개수

/*
* 제한 시간 : 116ms / 3s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 78.547%
*/

#include <iostream>
#include <string>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int t, n, m, answer;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> n >> m;

		answer = 0;

		for (int j = n; j <= m; j++) {
			std::string str = std::to_string(j);

			for (int k = 0; k < str.length(); k++) {
				if (str[k] == '0') {
					answer++;
				}
			}
		}
		std::cout << answer << '\n';
	}
}
