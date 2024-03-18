//BaekJoon_12873
//기념품

/*
* 제한 시간 : 16ms / 2s
* 메모리 제한 : 2152KB / 512MB
* 정답 비율 : 33.894%
*/

#include <iostream>
#include <queue>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	queue<int> q;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		q.emplace(i);
	}

	while (q.size() != 1) {
		for (long long i = 1; i <= n -1 ; i++) {
			long long tmp = i * i * i;
			
			tmp--;

			tmp %= (n - i + 1);

			while (tmp--) {
				q.emplace(q.front());
				q.pop();
			}
			q.pop();
		}
	}
	cout << q.front() << '\n';
}
