//BaekJoon_17479
//정식당


/*
* 제한 시간 : 236ms / 1s
* 메모리 제한 : 26172KB / 256MB
* 정답 비율 : 23.857%
*/

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::vector<std::string> order_list;

	std::map<std::string, long long> a;
	std::map<std::string, long long> b;
	std::set<std::string> c;

	int menu_a, menu_b, menu_c;

	std::cin >> menu_a >> menu_b >> menu_c;

	std::string tmp_str = "";
	long long tmp_int = 0;

	for (int i = 0; i < menu_a; i++) {
		std::cin >> tmp_str >> tmp_int;
		a[tmp_str] = tmp_int;
	}

	for (int i = 0; i < menu_b; i++) {
		std::cin >> tmp_str >> tmp_int;
		b[tmp_str] = tmp_int;
	}
	for (int i = 0; i < menu_c; i++) {
		std::cin >> tmp_str;
		c.insert(tmp_str);
	}


	int order;

	std::cin >> order;

	while (order--) {
		std::cin >> tmp_str;
		order_list.push_back(tmp_str);
	}

	long long sum_a = 0;
	long long sum_b = 0;
	int cnt_b = 0;
	int cnt_c = 0;

	for (auto food : order_list) {
		if (a.find(food) != a.end()) {
			sum_a += a[food];
		}
		else if (b.find(food) != b.end()) {
			sum_b += b[food];
			cnt_b++;
		}
		else {
			cnt_c++;
		}
	}

	long long total;

	std::string result = "Okay";

	if (sum_a < 20000 && cnt_b >= 1) {
		result = "No";
	}
	else {
		total = sum_a + sum_b;

		if (total < 50000 && cnt_c >= 1) {
			result = "No";
		}
		else if (total >= 50000 && cnt_c >= 2) {
			result = "No";
		}
	}

	std::cout << result;
}
