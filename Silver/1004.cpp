//BaekJoon_1004
//어린 왕자


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 44.825%
*/

#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t, n;
	int x1, y1, x2, y2;
	int x, y, r;

	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> x1 >> y1 >> x2 >> y2;

		std::cin >> n;

		int in_count = 0, out_count = 0;

		for (int j = 0; j < n; j++) {
			std::cin >> x >> y >> r;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r) {
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r) {
					out_count++;
				}
			}
			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r) {
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r) {
					in_count++;
				}
			}
		}

		std::cout << in_count + out_count << '\n';
	}
}
