//BaekJoon_1021
//회전하는 큐

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 60.960%
*/

#include<iostream>
#include<deque>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> dq;

	int n, m, left, right, cnt = 0;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}

	while (m--) {
		int num;

		cin >> num;

		for (int i = 0; i < dq.size(); i++) {
			if (dq[i] == num) {
				left = i;
				right = dq.size() - i;
				break;
			}
		}

		if (left <= right) {
			while (1) {
				if (dq.front() == num) {
					break;
				}
				dq.push_back(dq.front());
				dq.pop_front();
				cnt++;
			}
			dq.pop_front();
		}
		else {
			cnt++;
			
			while (1) {
				if (dq.back() == num) {
					break;
				}
				dq.push_front(dq.back());
				dq.pop_back();
				cnt++;
			}
			dq.pop_back();
		}
	}
	cout << cnt;

	return 0;
}
