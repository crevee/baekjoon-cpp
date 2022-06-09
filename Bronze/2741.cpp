//BaekJoon_2741
//N 찍기

/*
* 제한 시간 : 12ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 55.976%
*/

#include <iostream>

int N = 0;

int main(){

	std::cin >> N;

	for (int i = 1; i <= N; i++) {
			std::cout << i << "\n";
			// std::endl 사용시 시간 초과하여 \n 사용
			// 다른 방법으로는 std:cout이 아닌 printf 사용이 있다.
	}
	
	return 0;
}
