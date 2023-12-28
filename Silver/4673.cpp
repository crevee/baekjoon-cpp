//BaekJoon_4673.cpp
//셀프 넘버

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 48.594%
*/

#include <iostream>

int check(int num) {
	int sum = num;

	while (num != 0)
	{
		sum += (num % 10);
		num /= 10;
	}
	return sum;
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cout.tie(0);

	bool self_number[10001]{false};

	for (int i = 1; i <= 10001; i++)
	{
		if (check(i) < 10001)
		{
			self_number[check(i)] = true;
		}
	}

	for (int i = 1; i < 10001; i++)
	{
		if (!self_number[i])
		{
			std::cout << i << '\n';
		}
	}
	return 0;
}

//방법 2

/*
#include <iostream>

using namespace std;

bool check[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 1; i < 100001; i++) {
		int sum = 0;
		int a = i;

		while (a != 0) {
			sum += a % 10;
			a /= 10;
		}
		if (i + sum < 10001) {
			check[i + sum] = true;
		}
	}

	for (int i = 1; i < 10001; i++) {
		if (!check[i]) {
			cout << i << '\n';
		}
	}
	return 0;
}*/
