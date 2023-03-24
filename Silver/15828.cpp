//BaekJoon_15828
//Router


/*
* 제한 시간 : 28ms / 1s
* 메모리 제한 : 2416KB / 512MB
* 정답 비율 : 57.347%
*/

#include<iostream>
#include<queue>

int main() {

	std::cin.tie(0);
	std::ios::sync_with_stdio(0);

	int n, packet;
	std::queue<int> q;

	std::cin >> n;

	while (true) {
		std::cin >> packet;

		if (packet == -1) {
			break;
		}
		if (packet > 0) {
			if (q.size() < n) {
				q.push(packet);
			}
		}
		if (packet == 0) {
			q.pop();
		}
	}

	if (q.empty()) {
		std::cout << "empty" << '\n';
	}
	else {
		while (!q.empty()) {
			std::cout << q.front() << ' ';
			q.pop();
		}
	}
}
