//BaekJoon_1107
//리모컨

/*
* 제한 시간 : 44ms / 2s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 22.735%
*/

#include<iostream>
#include<vector>
#include<string>

std::vector<bool> button(10, false);

int Abs(int num) {
	return num > 0 ? num : -num;
}

int Min(int a, int b) {
	return a > b ? b : a;
}

bool check(int num) {
	std::string s = std::to_string(num);

	for (int i = 0; i < s.length(); i++) {
		if (button[s[i] - '0']) {
			return false;
		}
	}
	return true;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n,m;

	std::cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int temp;
		std::cin >> temp;
		button[temp] = true;
	}

	int minimun_num = Abs(n - 100);

	for (int i = 0; i <= 1000000; i++) {
		if (check(i)) {
			int temp = Abs(n - i) + std::to_string(i).length();
			minimun_num = Min(minimun_num, temp);
		}
	}
	std::cout << minimun_num;
}
