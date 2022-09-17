//BaekJoon_11866
//요세푸스 문제 0


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 512MB
* 정답 비율 : 56.947%
*/

#include <iostream>
#include <queue>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, k;
	std::queue<int> q;

	std::cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	std::cout << '<';

	while (q.size() != 0)
	{
		for (int i = 1; i < k; i++)
		{
			q.push(q.front());
			q.pop();
		}
		std::cout << q.front();

		if (q.size() != 1)
		{
			std::cout << ", ";
		}
		q.pop();
	}

	std::cout << '>';
}
