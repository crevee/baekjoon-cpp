//BaekJoon_10823
//더하기 2


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 57.093%
*/

#include<iostream>
#include<string>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int answer = 0;

	std::string s, temp;

	while (std::cin >> s){
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != ',') {
				temp += s[i];
			}
			else {
				answer += std::stoi(temp);
				temp.clear();
			}
		}
	}
	answer += std::stoi(temp);
	std::cout << answer;
}
