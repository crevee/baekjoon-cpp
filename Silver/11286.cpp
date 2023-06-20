//BaekJoon_11286
//절대값 힙

/*
* 제한 시간 : 16ms / 1s
* 메모리 제한 : 2916KB / 256MB
* 정답 비율 : 56.370%
*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, temp;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater< >> pq;

	cin >> n;

	while (n--) {
		cin >> temp;

		if (temp == 0) {
			if (pq.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << pq.top().second << '\n';
				pq.pop();
			}
		}
		else {
			pq.push({ abs(temp), temp });
		}
	}
}
