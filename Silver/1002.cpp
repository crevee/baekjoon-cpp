//BaekJoon_1002
//터렛


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 22.029%
*/

#include <iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t, x1 ,y1, r1, x2, y2, r2;
	int d, condition1, condition2;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

		condition1 = (r1 - r2) * (r1 - r2);
		condition2 = (r1 + r2) * (r1 + r2);

		if (d == 0) {
			if (condition1 == 0) {
				std::cout << "-1" << '\n';
			}
			else {
				std::cout << "0" << '\n';
			}
		}
		else if (d == condition1 || d == condition2) {
			std::cout << "1" << '\n';
		}
		else if (condition1 < d && d < condition2) {
			std::cout << "2" << '\n';
		}
		else{
			std::cout << "0" << '\n';
		}
	}

	return 0;
}
