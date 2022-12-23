//BaekJoon_23304
//아카라카


/*
* 제한 시간 : 260ms / 1s
* 메모리 제한 : 17708KB / 512MB
* 정답 비율 : 34.053%
*/

#include <iostream>
#include <string>

bool Palin(std::string x) {
	if (x.size() == 1) {
		return true;
	}

	std::string l, r;
	long long tmp = x.size() / 2;

	for (long long i = 0; i < tmp; i++) {
		l += x[i];
	}
	for (long long i = 0; i < x.size() / 2; i++) {
		if (x.size() % 2 == 1) {
			r += x[i + x.size() / 2 + 1];
		}
		else {
			r += x[i + x.size() / 2];
		}
	}
	
	if (l != r) {
		return false;
	}
	if (Palin(l) && Palin(r)) {
		return true;
	}
	else {
		return false;
	}
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string s;

	std::cin >> s;

	if (Palin(s)) {
		std::cout << "AKARAKA";
	}
	else {
		std::cout << "IPSELENTI";
	}
}
