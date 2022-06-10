//BaekJoon_5597
//과제 안 내신 분..?

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 66.355%
*/

#include <iostream>

int main() {

	int n = 0;

	bool student[31] = {0};

	for(int i = 1; i <= 28; i++)
	{
		std::cin >> n;
		student[n] = 1;
	}

	for (int j = 1; j <= 30; j++) {
		if (student[j] == 0) {
			std::cout << j << "\n";
		}
	}
	return 0;
}
