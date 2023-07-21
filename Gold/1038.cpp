//BaekJoon_1038
//감소하는 수

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2160KB / 512MB
* 정답 비율 : 33.735%
*/

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

vector <long long> v;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;

	cin >> n;

	queue<long long> q;

	for (int i = 0; i <= 9; i++) {
		q.push(i);
		v.push_back(i);
	}

	while (!q.empty()) {
		long long num = q.front();
		int last = num % 10;
		q.pop();

		for (int i = 0; i < last; i++) {
			long long new_num = num * 10 + i;
			q.push(new_num);
			v.push_back(new_num);
		}
	}

	if (n >= v.size()) {
		cout << -1;
	}
	else {
		cout << v[n];
	}

	return 0;
}
