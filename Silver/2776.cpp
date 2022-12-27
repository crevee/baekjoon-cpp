//BaekJoon_2776
//암기왕


/*
* 제한 시간 : 1888ms / 2s
* 메모리 제한 : 72380KB / 256MB
* 정답 비율 : 30.547%
*/

#include <iostream>
#include <map>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int t, n, m;
	std::map<int, bool> note;

	std::cin >> t;

	while (t--) {
		int num;

		note.clear();

		std::cin >> n;

		for (int i = 0; i < n; i++) {
			std::cin >> num;
			note.insert(std::pair<int, bool>(num, true));
		}
		std::cin >> m;

		for (int i = 0; i < m; i++) {
			std::cin >> num;

			if (note[num] == true) {
				std::cout << "1\n";
			}
			else {
				std::cout << "0\n";
			}
		}
	}
}
