//BaekJoon_2810
//컵홀더

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 48.857%
*/

#include <iostream>
#include <string>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	double cnt = 0;
	std::string seat;
	bool flag = false;

	std::cin >> n >> seat;

	for (int i = 0; i < n; i++) {
		if (seat[i] == 'S') {
			cnt++;
		}
		else {
			flag = true;
			cnt += 0.5;
		}
	}

	if (flag == true) {
		std::cout << cnt + 1;
	}
	else {
		std::cout << cnt;
	}
}
