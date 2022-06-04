//BaekJoon_5554
//심부름 가는 길

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 83.661%
*/

#include <iostream>

int main() {

	int t[4]{ 0 };

	std::cin >> t[0] >> t[1] >> t[2] >> t[3];

	int TotalTime = t[0] + t[1] + t[2] + t[3];

	std::cout << TotalTime / 60 << std::endl << TotalTime % 60 << std::endl;
}
