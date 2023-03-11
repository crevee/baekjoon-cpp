//BaekJoon_5397
//키로거


/*
* 제한 시간 : 256ms / 1s
* 메모리 제한 : 19384KB / 256MB
* 정답 비율 : 25.881%
*/

#include<iostream>
#include<list>
#include<string>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::list<char> l;
		std::string s;
		std::list<char>::iterator iter = l.begin();

		std::cin >> s;

		for (auto c : s) {
			if (c == '<') {
				if (iter != l.begin()) {
					iter--;
				}
			}
			else if (c == '>') {
				if (iter != l.end()) {
					iter++;
				}
			}
			else if (c == '-') {
				if (iter != l.begin()) {
					iter--;
					iter = l.erase(iter);
				}
			}
			else {
				l.insert(iter, c);
			}
		}

		for (auto r : l) {
			std::cout << r;
		}
		if (i != t - 1) {
			std::cout << '\n';
		}
	}
}
