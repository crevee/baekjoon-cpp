//BaekJoon_1715
//카드 정렬하기

/*
* 제한 시간 : 24ms / 2s
* 메모리 제한 : 2920KB / 128MB
* 정답 비율 : 33.996%
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;
		
		cin >> tmp;

		pq.emplace(tmp);
	}

	while (pq.size() > 1) {
		int x, y;
		
		x = pq.top();
		pq.pop();
		y = pq.top();
		pq.pop();

		result += x + y;
		pq.emplace(x + y);
	}

	cout << result;

	return 0;
}
