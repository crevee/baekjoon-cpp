//BaekJoon_2622
//삼각형만들기

/*
* 제한 시간 : 164ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 44.932%
*/

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;
	
	cin >> n;

	for (int i = 1; i < n; i++) {
		for (int j = i; j < n; j++) {
			int k = n - i - j;

			if (j > k)
				break;
			if (i + j > k) {
				result++;
			}
		}
	}
	cout << result;

	return 0;
}
