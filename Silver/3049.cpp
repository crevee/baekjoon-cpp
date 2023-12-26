//BaekJoon_3049
//다각형의 대각선


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 76.033%
*/

#include <iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	cout << n * (n - 1) * (n - 2) * (n - 3) / 24 << '\n';

	return 0;
}
