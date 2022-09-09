//BaekJoon_2164
//숫자 카드


/*
* 제한 시간 : 4ms / 2s
* 메모리 제한 : 4156KB / 128MB
* 정답 비율 : 51.940%
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

	while (q.size() > 1)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}

	std::cout << q.front();

	return 0;
}
