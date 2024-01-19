//BaekJoon_11531
//ACM 대회 채점
/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 256MB
* 정답 비율 : 78.056%
*/

#include <iostream>
#include <string>

using namespace std;

int alph[26];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int m, result = 0, cnt = 0;
	char c;
	string check;

	while (1) {
		cin >> m;

		if (m == -1) {
			break;
		}

		cin >> c >> check;

		if (check == "wrong") {
			alph[c - 65]++;
		}
		else {
			result += m + alph[c - 65] * 20;
			cnt++;
		}
	}

	cout << cnt << ' ' << result;

	return 0;
}
