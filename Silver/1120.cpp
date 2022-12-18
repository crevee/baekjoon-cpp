//BaekJoon_1120
//문자열

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 56.032%
*/

#include <iostream>
#include <string>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string a, b;
	int cnt;
	int min = 50;

	std::cin >> a >> b;

	for (int i = 0; i <= b.length() - a.length(); i++) {
		cnt = 0;

		for (int j = 0; j < a.length(); j++) {
			if (a[j] != b[i + j]) {
				cnt++;
			}
		}
		min = min >= cnt ?
			cnt : min;
	}
	std::cout << min;
}
