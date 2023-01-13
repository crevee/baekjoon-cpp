//BaekJoon_7662
//이중 우선순위 큐

/*
* 제한 시간 : 1480ms / 6s
* 메모리 제한 : 49016KB / 256MB
* 정답 비율 : 22.199%
*/

#include <iostream>
#include <set>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int t, n;

	std::cin >> t;

	while (t--) {
		std::cin >> n;

		char order;
		int num;

		std::multiset<int> mulset;

		while (n--) {
			std::cin >> order >> num;

			if (order == 'I') {
				mulset.insert(num);
			}
			else if(order == 'D'){
				if (!mulset.empty() && num == -1) {
					mulset.erase(mulset.begin());
				}
				else if (!mulset.empty() && num == 1) {
					auto iter = mulset.end();
					iter--;
					mulset.erase(iter);
				}
			}
		}

		if (mulset.empty()) {
			std::cout << "EMPTY" << '\n';
		}
		else {
			auto end_iter = mulset.end();
			end_iter--;
			std::cout << *end_iter << ' ' << *mulset.begin() << '\n';
		}
	}
}
