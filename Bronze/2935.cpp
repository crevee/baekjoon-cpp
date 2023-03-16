//BaekJoon_2935
//소음


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 59.387%
*/

#include<iostream>
#include<string>

int Max(int a, int b) {
	return a > b ? a : b;
}

int Min(int a, int b) {
	return a > b ? b : a;
}

void Print(int a) {
	for (int i = 0; i < a; i++) {
		std::cout << "0";
	}
}

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string a, b;
	char oper;

	std::cin >> a >> oper >> b;

	int a0 = a.size() - 1;
	int b0 = b.size() - 1;

	if (oper == '+') {
		if (a0 == b0) {
			std::cout << "2";
			Print(a0);
		}
		else {
			std::cout << "1";
			int big = Max(a0, b0);
			int small = Min(a0, b0);
			Print(big - small - 1);
			std::cout << "1";
			Print(small);
		}
	}
	if (oper == '*') {
		std::cout << "1";
		Print(a0 + b0);
	}
}
