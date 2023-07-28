//BaekJoon_19939
//박 터뜨리기


/*
* 제한 시간 : 0ms / 0.25s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 37.562%
*/

#include <iostream>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, sum = 0;;

	cin >> n >> k;

	for (int i = 1; i <= k; i++) {
		sum += i;
	}
	n -= sum;

	if (n < 0) {
		cout << -1;
	}
	else {
		if (n % k == 0) {
			cout << k - 1;
		}
		else {
			cout << k;
		}
	}
	return 0;
}
