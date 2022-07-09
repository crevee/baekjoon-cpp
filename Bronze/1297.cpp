//BaekJoon_1297
//스타후르츠
/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2032KB / 128MB
* 정답 비율 : 58.017%
*/

#include <iostream>
#include <cmath>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int d = 0, h = 0, w = 0;

	std::cin >> d >> h >> w;

	int height = (d / sqrt(h * h + w * w)) * h, wide = (d / sqrt(h * h + w * w)) * w;
	
	std::cout << height << ' ' << wide;

	return 0;
}
