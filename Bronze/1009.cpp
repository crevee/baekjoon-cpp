//BaekJoon_1009
//분산처리

/*
* 제한 시간 : 1s
* 메모리 제한 : 128MB
* 정답 비율 : 24.317%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, a, b, multiply;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;

		multiply = 1;

		b = (b % 4) ? b % 4 : 4;

		while (b--) {
			multiply *= a;
		}
		cout << (multiply % 10 ? multiply % 10 : 10) << "\n";
	}
}
