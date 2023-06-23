//BaekJoon_2522
//별 찍기 - 12


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 84.146%
*/

#include <iostream>

int main() {
	using namespace std;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = n- i - 1; j >= 0; j--) {
			cout << " ";
		}
		
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 0; j < n - i; j++) {
			cout << " ";
		}

		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
