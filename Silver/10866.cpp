//BaekJoon_10866
//덱

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2028KB / 256MB
* 정답 비율 : 56.180%
*/

#include <iostream>
#include <deque>

std::deque<int> dq;

void push_front() {
	int x;

	std::cin >> x;

	dq.push_front(x);

	return;
}

void push_back() {
	int x;

	std::cin >> x;

	dq.push_back(x);

	return;
}

int pop_front(){
	if (dq.empty())
	{
		return -1;
	}
	else
	{
		int front = dq.front();
		dq.pop_front();
		return front;
	}
}

int pop_back() {
	if (dq.empty())
	{
		return -1;
	}
	else
	{
		int back = dq.back();
		dq.pop_back();
		return back;
	}
}



int size() {
	return dq.size();
}

int empty() {
	if (dq.empty())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int front() {
	if (dq.empty())
	{
		return -1;
	}
	else
	{
		int front = dq.front();
		return front;
	}
}

int back() {
	if (dq.empty())
	{
		return -1;
	}
	else
	{
		int back = dq.back();
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

		if (str == "push_front")
		{
			push_front();
		}
		else if (str == "push_back")
		{
			push_back();
		}
		else if (str == "pop_front")
		{
			std::cout << pop_front() << '\n';
		}
		else if (str == "pop_back")
		{
			std::cout << pop_back() << '\n';
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
