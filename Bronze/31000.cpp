//BaekJoon_31000
//교환 분배법칙

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 1024MB
* 정답 비율 : 53.056%
*/

#include <iostream>

using namespace std;

long long result = 13;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, tmp = 12;

	cin >> n;

	for (int i = 2; i <= n; i++) {
		result += 14 + tmp;
		tmp += 14;
	}

	cout << result;

	return 0;
}
