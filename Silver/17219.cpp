//BaekJoon_17219
//비밀번호 찾기

/*
* 제한 시간 : 224ms / 5s
* 메모리 제한 : 16680KB / 256MB
* 정답 비율 : 70.626%
*/

#include <iostream>
#include <string>
#include <map>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m;
	std::map<std::string, std::string> account;
	std::string address, pw;

	std::cin >> n >> m;

	for (int i = 0; i < n; i++) {
		std::cin >> address >> pw;
		account[address] = pw;
	}

	for (int i = 0; i < m; i++) {
		std::cin >> address;
		std::cout << account[address] << '\n';
	}

	return 0;
}
