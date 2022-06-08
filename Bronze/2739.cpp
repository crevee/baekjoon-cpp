//BaekJoon_2739
//구구단

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 51.159%
*/

#include <iostream>

int N = 0;

int main(){

	std::cin >> N;

	for (int i = N; i <= N; i++) {
		for (int j = 1; j <= 9; j++) {
			std::cout << i  << " * " << j << " = " << i * j << std::endl;
		}
	}
	return 0;
}
