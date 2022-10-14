//BaekJoon_2083
//럭비 클럽

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 63.019%
*/

#include <iostream>
#include <string>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string name;
	int age, weight;

	while (true) {
		std::cin >> name >> age >> weight;
		if (name == "#" && age == 0 && weight == 0) {
			break;
		}

		if (age > 17 || weight >= 80) {
			std::cout << name << " Senior" << '\n';
		}
		else {
			std::cout << name << " Junior" << '\n';
		}
	}
	return 0;
}
