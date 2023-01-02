//BaekJoon_10825
//국영수


/*
* 제한 시간 : 80ms / 1s
* 메모리 제한 : 6720KB / 256MB
* 정답 비율 : 52.516%
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct student {
	std::string name{};
	int kor{}, eng{}, math{};
};

bool compare(student a, student b) {
	if (a.kor == b.kor) {
		if (a.eng == b.eng) {
			if (a.math == b.math) {
				return a.name < b.name;
			}
			else {
				return a.math > b.math;
			}
		}
		else {
			return a.eng < b.eng;
		}
	}
	else {
		return a.kor > b.kor;
	}
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;

	std::cin >> n;

	std::vector<student> list(n);

	for (int i = 0; i < n; i++) {
		std::cin >> list[i].name >> list[i].kor >> list[i].eng >> list[i].math;
	}

	std::sort(list.begin(), list.end(), compare);

	for (int i = 0; i < n; i++) {
		std::cout << list[i].name << '\n';
	}
}
