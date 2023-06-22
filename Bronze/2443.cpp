//BaekJoon_2443
//별 찍기 -6

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 75.355%
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
		for (int k = 2 * n - i - 1; k - i > 0; k--) {
			cout << "*";
		}
		cout << "\n";
	}
}
