//BaekJoon_2851
//슈퍼 마리오

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 41.236%
*/

#include<iostream>

using namespace std;

int main() {
	int a[10], result = 0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++) {
		int temp_sum = result + a[i];

		if (temp_sum >= 100) {
			if (temp_sum - 100 <= 100 - result) {
				cout << temp_sum;
			}
			else {
				cout << result;
			}
			return 0;
		}
		result = temp_sum;
	}
	cout << result;
}
