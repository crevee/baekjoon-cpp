//BaekJoon_2161
//카드1

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 68.891%
*/

#include <iostream>
#include <queue>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::queue<int> q;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	while (q.size() != 1)
	{
		std::cout << q.front() << ' ';
		q.pop();
		q.push(q.front());
		q.pop();
	}

	std::cout << q.front();

	return 0;
}
