//BaekJoon_10991
//별 찍기 - 16

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 78.799%
*/

#include <iostream>

int main() {
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j > 0; j--) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}
