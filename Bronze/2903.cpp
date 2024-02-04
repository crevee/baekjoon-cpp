//BaekJoon_2903
//중앙 이동 알고리즘

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 71.442%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int dot = 2;
	int n;

	cin >> n;

	while (n--) {
		dot = dot * 2 - 1;
	}

	cout << dot * dot;

	return 0;
}
