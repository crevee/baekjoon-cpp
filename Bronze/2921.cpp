//BaekJoon_2921
//오늘 날짜

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 80.541%
*/

#include <iostream>

using namespace std;

long long result = 0;

void Domino(int n) {
	for (int i = 0; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			result += i + j;
		}
	}
	cout << result;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	Domino(n);
}
