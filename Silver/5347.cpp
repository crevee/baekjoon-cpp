//BaekJoon_5347
//터렛


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 51.600%
*/

#include <iostream>

#include<iostream>

using namespace std;

int GCD(int a, int b) {
	int c;

	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		long long a, b;
		cin >> a >> b;
		cout << a * b /GCD(a, b) << "\n";
	}
}
