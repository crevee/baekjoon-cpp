//BaekJoon_9184
//신나는 함수 실행


/*
* 제한 시간 : 8ms / 1s
* 메모리 제한 : 2056KB / 128MB
* 정답 비율 : 41.968%
*/

#include<iostream>

using namespace std;

int temp[21][21][21];

int W(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	if (a > 20 || b > 20 || c > 20) {
		return W(20, 20, 20);
	}
	if (temp[a][b][c]) {
		return temp[a][b][c];
	}
	if (a < b && b < c) {
		temp[a][b][c] = W(a, b, c - 1) + W(a, b - 1, c - 1) - W(a, b - 1, c);
		return temp[a][b][c];
	}
	temp[a][b][c] = W(a - 1, b, c) + W(a - 1, b - 1, c) + W(a - 1, b, c - 1)
		- W(a - 1, b - 1, c - 1);
	return temp[a][b][c];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;

	while (true) {
		cin >> a >> b >> c;

		if (a == -1 && b == -1 && c == -1) {
			break;
		}
		cout << "w(" << a << ", " << b << ", " << c << ") = "
			<< W(a, b, c) << "\n";
	}
}
