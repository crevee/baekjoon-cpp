//BaekJoon_1822
//개미


/*
* 제한 시간 : 772ms / 2s
* 메모리 제한 : 54864KB / 256MB
* 정답 비율 : 45.164%
*/

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

int a[500000], b[500000];
std::map<int, int> m;
std::vector<int> not_in_b;

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int a_size, b_size;

	std::cin >> a_size >> b_size;
	
	for (int i = 0; i < a_size; i++) {
		std::cin >> a[i];
	}

	for (int i = 0; i < b_size; i++) {
		std::cin >> b[i];
	}

	for (int i = 0; i < b_size; i++) {
		m[b[i]]++;
	}

	for (int i = 0; i < a_size; i++) {
		if (!m[a[i]]) {
			not_in_b.push_back(a[i]);
		}
	}

	std::sort(not_in_b.begin(), not_in_b.end());
	std::cout << not_in_b.size() << '\n';

	for (int i = 0; i < not_in_b.size(); i++) {
		std::cout << not_in_b[i] << ' ';
	}
}
