//BaekJoon_2346
//풍선 터뜨리기


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2156KB / 4MB
* 정답 비율 : 42.229%
*/

#include<iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	deque<pair<int, int>> dq;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;

		cin >> temp;
		dq.push_back(make_pair(temp, i + 1));
	}

	while (!dq.empty()) {
		int current = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();

		if (dq.empty()) {
			break;
		}

		if (current > 0) {
			for (int i = 0; i < current - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			for (int i = 0; i < -1 * current; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
}
