//BaekJoon_25304
//영수증


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 58.231%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, n, a, b;

	cin >> x >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		x -= a * b;
	}

	if (x == 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}
