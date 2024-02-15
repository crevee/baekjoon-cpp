//BaekJoon_11003
//최솟값 찾기

/*
* 제한 시간 : 1464ms / 2.4s
* 메모리 제한 : 43588KB / 512MB
* 정답 비율 : 30.528%
*/

#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, l;
	deque<pair<int, int>>dq;

	cin >> n >> l;

	for (int i = 0; i < n; i++) {
		int now;

		cin >> now;

		while (dq.size() && dq.back().first > now) {
			dq.pop_back();
		}
		dq.emplace_back(pair(now, i));

		if (dq.front().second <= i - l) {
			dq.pop_front();
		}

		cout << dq.front().first << ' ';
	}

	return 0;
}
