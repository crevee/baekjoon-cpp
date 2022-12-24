//BaekJoon_1269
//대칭 차집합


/*
* 제한 시간 : 188ms / 2s
* 메모리 제한 : 22336KB / 256MB
* 정답 비율 : 62.617%
*/

#include <iostream>
#include <map>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::map<int, int> m;

	int aSize, bSize, answer = 0;
	int* a;
	int* b;

	std::cin >> aSize >> bSize;

	a = new int[aSize];
	b = new int[bSize];

	for (int i = 0; i < aSize; i++) {
		std::cin >> a[i];
	}

	for (int i = 0; i < bSize; i++) {
		std::cin >> b[i];
	}

	for (int i = 0; i < aSize; i++) {
		m[a[i]]++;
	}
	for (int i = 0; i < bSize; i++) {
		if (m[b[i]] != 0) {
			answer++;
		}
	}

	std::cout << aSize + bSize - answer * 2;
}
