//BaekJoon_10826
//피보나치 수 4

/*
* 제한 시간 : 300ms / 1s
* 메모리 제한 : 18308KB / 256MB
* 정답 비율 : 39.356%
*/

#include <iostream>
#include <string>

std::string dp[10000];

std::string Sum(std::string x, std::string y) {
	int num;
	int carry = 0;

	std::string result;

	std::reverse(x.begin(), x.end());
	std::reverse(y.begin(), y.end());

	while (x.length() < y.length()) {
		x += '0';
	}
	while (x.length() > y.length()) {
		y += '0';
	}

	for (int i = 0; i < x.length(); i++) {
		num = (x[i] - '0' + y[i] - '0' + carry) % 10;
		result += std::to_string(num);
		carry = (x[i] - '0' + y[i] - '0' + carry) / 10;
	}
	if (carry != 0) {
		result += std::to_string(carry);
	}

	std::reverse(result.begin(), result.end());

	return result;
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	dp[0] = '0';
	dp[1] = '1';

	for (int i = 2; i <= n; i++) {
		dp[i] = Sum(dp[i - 1], dp[i - 2]);
	}

	std::cout << dp[n];


	return 0;
}
