//BaekJoon_1541
//잃어버린 괄호

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 51.413%
*/

#include <iostream>
#include <cstring>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	char mathematical_expression[51];
	int tmp = 0, sum = 0;
	bool flag = false;

	std::cin >> mathematical_expression;

	int len = strlen(mathematical_expression);

	for (int i = 0; i <= len; i++) {
		if (mathematical_expression[i] == '+' || mathematical_expression[i] == '-' || i == len) {
			if (flag == false) {
				sum += tmp;
				tmp = 0;
			}
			else {
				sum -= tmp;
				tmp = 0;
			}

			if (mathematical_expression[i] == '-') {
				flag = true;
			}
		}
		else {
			tmp *= 10;
			tmp += mathematical_expression[i] - '0';
		}
	}

	std::cout << sum;

	return 0;
}
