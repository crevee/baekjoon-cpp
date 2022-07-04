//BaekJoon_2588
//곱셈
/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 48.101%
*/

#include <iostream>

int main(){

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int x_1 = 0, y_1 = 0;


	std::cin >> x_1 >> y_1;


	std::cout << x_1 * (y_1 % 10) << "\n" << x_1 * (y_1 % 100 / 10) << "\n"
			  << x_1 * (y_1 / 100) << "\n" << x_1 * y_1;

	return 0;

}	
