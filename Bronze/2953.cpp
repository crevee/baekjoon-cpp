//BaekJoon_2953
//나는 요리사다

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 67.076%
*/

#include <iostream>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a[6]{}, winner_point = 0, winner_index = 0;

	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < 4; j++) {
			int temp;

			cin >> temp;
			a[i] += temp;
		}
		if (winner_point < a[i]) {
			winner_point = a[i];
			winner_index = i;
		}
	}
	cout << winner_index << " " << a[winner_index];

	return 0;
}
