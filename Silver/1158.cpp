//BaekJoon_1158
//요세푸스 문제


/*
* 제한 시간 : 72ms / 2s
* 메모리 제한 : 2152KB / 256MB
* 정답 비율 : 48.154%
*/

#include <iostream>
#include <queue>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, k;

	std::cin >> n >> k;

	std::queue<int> q;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	std::cout << '<';

	while (q.size() > 1)
	{
		for (int i = 1; i < k; i++)
		{
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		std::cout << q.front() << ", ";
		q.pop();
	}
	std::cout << q.front() << '>';

	return 0;
}
