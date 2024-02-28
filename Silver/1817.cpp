//BaekJoon_1817
//짐 챙기는 숌


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 46.477%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, weight = 0, result = 0, book = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> book;

		if (weight + book > m) {
			weight = book;
			result++;
		}
		else {
			weight += book;
		}
	}

	if (weight) {
		result++;
	}
	cout << result;
}
