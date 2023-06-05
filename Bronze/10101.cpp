//BaekJoon_10101
//삼각형 외우기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 256MB
* 정답 비율 : 56.083%
*/

#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;

	cin >> a >> b >> c;

	if ((a + b + c) != 180) {
		cout << "Error \n";
	}
	else if (a == b && b == c) {
		cout << "Equilateral \n";
	}
	else if (a == b || a == c || b == c) {
		cout << "Isosceles \n";
	}
	else {
		cout << "Scalene \n";
	}
}
