//BaekJoon_5565
//영수증

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 87.896%
*/

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int total;

	cin >> total;

	for (int i = 0; i < 9; i++) {
		int temp;

		cin >> temp;

		total -= temp;
	}
	cout << total;
}
