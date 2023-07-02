//BaekJoon_10807
//개수 세기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 64.803%
*/

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, v, result = 0;
	int* a;

	cin >> n;

	a = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cin >> v;

	for (int i = 0; i < n; i++) {
		if (a[i] == v) {
			result++;
		}
	}
	cout << result;
}
