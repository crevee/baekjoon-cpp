//BaekJoon_7571
//점 모으기

/*
* 제한 시간 : 76ms / 1s
* 메모리 제한 : 2800KB / 256MB
* 정답 비율 : 36.101%
*/

#include <iostream>
#include <algorithm>

using namespace std;

int x[100000], y[100000];

int main() {

	int n, m, tx, ty, result = 0;


	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> x[i] >> y[i];
	}

	sort(x, x + m);
	sort(y, y + m);

	tx = x[m / 2];
	ty = y[m / 2];

	for (int i = 0; i < m; i++) {
		result = result + abs(x[i] - tx) + abs(y[i] - ty);
	}
	cout << result;

	return 0;
}
