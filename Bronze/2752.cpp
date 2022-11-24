//BaekJoon_2752
//세수정렬


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 61.491%
*/

#include <iostream>

int arr[3]{};

void Sort() {
	
	int tmp;

	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (arr[i] > arr[j]) {
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	for (int i = 0; i < 3; i++) {
		std::cin >> arr[i];
	}

	Sort();

	for (int i = 0; i < 3; i++) {
		std::cout << arr[i] << ' ';
	}

	return 0;
}
