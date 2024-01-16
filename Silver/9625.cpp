//BaekJoon_9625
//BABBA

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 65.628%
*/

#include <iostream>

using namespace std;

int a[46]{ 1, }, b[46]{ 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int k;

	cin >> k;

	for (int i = 0; i < k; i++) {
		a[i + 1] = b[i];
		b[i + 1] = a[i] + b[i];
	}
	cout << a[k] << ' ' << b[k];

	return 0;
}
