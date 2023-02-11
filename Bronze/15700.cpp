//BaekJoon_15700
//타일 채우기 4


/*
* 제한 시간 : 0ms / 0.1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 59.735%
*/

#include<iostream>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	long long n, m, result;

	std::cin >> n >> m;

	result = n * m / 2;
	
	std::cout << result;
}
