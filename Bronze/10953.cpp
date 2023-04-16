//BaekJoon_10953
//A + B - 6

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 68.098%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, a, b;
	char c;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> c >> b;
		cout << a + b << "\n";
	}
}
