//BaekJoon_2018
//수들의 합 5


/*
* 제한 시간 : 20ms / 2s
* 메모리 제한 : 2020KB / 32MB
* 정답 비율 : 48.867%
*/

#include<iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, start = 1, end = 1, sum = 0, answer = 0;

	cin >> n;

	while (start <= end && end <= n) {
		if (sum < n) {
			sum += end++;
		}
		else {
			if (sum == n) {
				answer++;
			}
			sum -= start++;
		}
	}
	cout << answer + 1;
}
