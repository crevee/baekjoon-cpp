//BaekJoon_2075
//N번째 큰 수


/*
* 제한 시간 : 384ms / 1s
* 메모리 제한 : 2156KB / 12MB
* 정답 비율 : 39.098%
*/

#include <iostream>
#include <queue>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> pq;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int num;

			cin >> num;

			pq.push(num);

			if (pq.size() > n) {
				pq.pop();
			}
		}
	}
	cout << pq.top();

	return 0;
}
