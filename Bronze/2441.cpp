//BaekJoon_2441
//별 찍기 - 4

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 74.203%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = i; j > 0; j--) {
			cout << " ";
		}
		for (int k = n; k - i > 0; k--) {
			cout << "*";
		}
		cout << "\n";
	}
}
