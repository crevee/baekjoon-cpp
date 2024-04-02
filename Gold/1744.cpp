//BaekJoon_1744
//수 묶기

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 56.608%
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	priority_queue<int> plus_pq;
	priority_queue<int, vector<int>, greater<int>> minus_pq;

	int one_cnt = 0;
	int zero_cnt = 0;

	for (int i = 0; i < n; i++) {
		int tmp;

		cin >> tmp;

		if (tmp > 1) {
			plus_pq.emplace(tmp);
		}
		else if (tmp == 1) {
			one_cnt++;
		}
		else if (tmp == 0) {
			zero_cnt++;
		}
		else {
			minus_pq.emplace(tmp);
		}
	}

	int sum = 0;

	while (plus_pq.size() > 1) {
		int first = plus_pq.top();

		plus_pq.pop();

		int second = plus_pq.top();

		plus_pq.pop();

		sum = sum + first * second;
	}

	if (!plus_pq.empty()) {
		sum = sum + plus_pq.top();
		plus_pq.pop();
	}

	while (minus_pq.size() > 1) {
		int first = minus_pq.top();

		minus_pq.pop();

		int second = minus_pq.top();

		minus_pq.pop();

		sum = sum + first * second;
	}

	if (!minus_pq.empty()) {
		if (zero_cnt == 0) {
			sum = sum + minus_pq.top();

			minus_pq.pop();
		}
	}

	sum = sum + one_cnt;

	cout << sum << '\n';

	return 0;
}
