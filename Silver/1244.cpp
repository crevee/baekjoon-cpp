//BaekJoon_1244
//스위치 켜고 끄기


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 19.637%
*/

#include <iostream>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int switch_num, student, gender, number;
	bool arr[101]{};

	std::cin >> switch_num;

	for (int i = 1; i <= switch_num; i++) {
		std::cin >> arr[i];
	}

	std::cin >> student;

	for (int i = 0; i < student; i++) {
		std::cin >> gender >> number;

		if (gender == 1) {
			for (int i = 1; i <= switch_num; i++) {
				if (i % number == 0) {
					arr[i] = !arr[i];
				}
			}
		}
		else {
			arr[number] = !arr[number];

			for (int i = 1; arr[number + i] == arr[number - i]; i++) {
				if (number + i > switch_num || number - i < 1) {
					break;
				}
				arr[number + i] = !arr[number + i];
				arr[number - i] = !arr[number - i];
			}
		}
	}

	for (int i = 1; i <= switch_num; i++) {
		std::cout << arr[i] << ' ';
		if (i % 20 == 0) {
			std::cout << '\n';
		}
	}
}
