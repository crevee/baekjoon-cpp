//BaekJoon_10845
//큐


/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2156KB / 256MB
* 정답 비율 : 48.938%
*/

#include <iostream>
#include <queue>

std::queue<int> q;

void push() {
	int t;

	std::cin >> t;

	q.push(t);

	return;
}

int pop(){
	if (q.empty())
	{
		return -1;
	}
	else
	{
		int front = q.front();
		q.pop();
		return front;
	}
}

int size() {
	return q.size();
}

int empty() {
	if (q.empty())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int front() {
	if (q.empty())
	{
		return -1;
	}
	else
	{
		int front = q.front();
		return front;
	}
}

int back() {
	if (q.empty())
	{
		return -1;
	}
	else
	{
		int back = q.back();
		return back;
	}
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	while (n--)
	{
		std::string str;

		std::cin >> str;

		if (str == "push")
		{
			push();
		}
		else if (str == "pop")
		{
			std::cout << pop() << '\n';
		}
		else if (str == "size")
		{
			std::cout << size() << '\n';
		}
		else if (str == "empty")
		{
			std::cout << empty() << '\n';
		}
		else if (str == "front")
		{
			std::cout << front() << '\n';
		}
		else if (str == "back")
		{
			std::cout << back() << '\n';
		}
	}
}
