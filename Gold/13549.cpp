//BaekJoon_13549
//숨바꼭질 3

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2544KB / 512MB
* 정답 비율 : 25.255%
*/

#include<iostream>
#include<queue>

int point[100001];
int n, k, result = 100000;

void ShortestTime() {
	std::queue<int> q;
	q.push(n);
	point[n] = 0;

	while (!q.empty()) {
		auto cur = q.front();
		q.pop();

		if (cur == k) {
			result = point[cur];
			return;
		}
		if (cur * 2 < 100001 && point[cur * 2] > point[cur]) {
			point[cur * 2] = point[cur];
			q.push(cur * 2);
		}
		if (cur + 1 < 100001 && point[cur + 1] > point[cur] + 1) {
			point[cur + 1] = point[cur] + 1;
			q.push(cur + 1);
		}
		if (cur - 1 >= 0 && point[cur - 1] > point[cur] + 1) {
			point[cur - 1] = point[cur] + 1;
			q.push(cur - 1);
		}
	}
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n >> k;

	for (int i = 0; i < 100001; i++) {
		point[i] = 100000;
	}
	ShortestTime();

	std::cout << result;
}
