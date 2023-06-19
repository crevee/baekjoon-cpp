//BaekJoon_5585
//거스름돈

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 64.589%
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;
	vector<int> yen = { 500, 100, 50, 10, 5, 1 };

	cin >> n;
	n = 1000 - n;

	for (int i = 0; i < 6; i++) {
		while (1) {
			if (n >= yen[i]) {
				n -= yen[i];
				result++;
			}
			else {
				break;
			}
		}
	}
	cout << result;
}
