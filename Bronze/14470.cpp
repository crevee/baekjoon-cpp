//BaekJoon_14470
//전자레인지

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 76.313%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d, e, result = 0;

	cin >> a >> b >> c >> d >> e;

	while (a < b) {
		if (a < 0) {
			result += c;
			a++;
		}
		else if (a == 0) {
			result += d;
			a++;
			result += e;
		}
		else {
			a++;
			result += e;
		}
	}

	cout << result;

	return 0;
}
