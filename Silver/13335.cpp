//BaekJoon_13335
//트럭


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 54.928%
*/

#include <iostream>
#include <queue>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, w, l, answer = 0, a[1000];
	queue<int> q;

	cin >> n >> w >> l;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int weight_sum = 0;

	for (int i = 0; i < n; i++) {
		while (true) {
			if (q.size() == w) {
				weight_sum -= q.front();
				q.pop();
			}
			if (a[i] + weight_sum <= l) {
				break;
			}
			q.push(0);
			answer++;
		}
		q.push(a[i]);
		weight_sum += a[i];
		answer++;
	}

	cout << answer + w;

	return 0;
}
