//BaekJoon_5086
//배수와 약수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 66.614%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y;

	while (1) {
		cin >> x >> y;

		if (x == 0 && y == 0) {
			break;
		}
		if (y % x == 0) {
			cout << "factor" << "\n";
		}
		else if (x % y == 0) {
			cout << "multiple" << "\n";
		}
		else {
			cout << "neither" << "\n";
		}
	}
}
