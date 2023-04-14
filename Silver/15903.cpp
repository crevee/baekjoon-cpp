//BaekJoon_15903
//카드 합체 놀이


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2160KB / 512MB
* 정답 비율 : 43.380%
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

priority_queue<long long, vector<long long>, greater<long long>> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		long long temp;
		cin >> temp;
		q.push(temp);
	}

	for (int i = 0; i < m; i++) {
		long long temp1 = q.top();
		q.pop();

		long long temp2 = q.top();
		q.pop();

		q.push(temp1 + temp2);
		q.push(temp1 + temp2);
	}

	long long sum = 0;

	while (!q.empty()) {
		sum += q.top();
		q.pop();
	}
	cout << sum;
}
