//BaekJoon_11728
//배열 합치기

/*
* 제한 시간 : 640ms / 1.5s
* 메모리 제한 : 9836KB / 256MB
* 정답 비율 : 45.243%
*/

#include <iostream>
#include <algorithm>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n, m;

	int* a;

	std::cin >> n >> m;

	a = new int[n + m];

	for (int i = 0; i < n + m; i++) {
		std::cin >> a[i];
	}

	std::sort(a, a + n + m);

	for (int i = 0; i < n + m; i++) {
		std::cout << a[i] << ' ';
	}

}
