//BaekJoon_11000
//강의실 배정

/*
* 제한 시간 : 52ms / 1s
* 메모리 제한 : 5224KB / 256MB
* 정답 비율 : 28.836%
*/

#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int, int >>class_time;
priority_queue<int, vector<int>, greater<int >> pq;

int ClassCount(int class_count) {
	pq.push(class_time[0].second);

	for (int i = 1; i < class_count; i++) {
		pq.push(class_time[i].second);

		if (pq.top() <= class_time[i].first) {
			pq.pop();
		}
	}
	return pq.size();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int start_time, end_time;

		cin >> start_time >> end_time;

		class_time.push_back(make_pair(start_time, end_time));
	}

	sort(class_time.begin(), class_time.end());

	cout << ClassCount(n);
}
