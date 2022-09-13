//BaekJoon_10828
//스택

/*
* 제한 시간 : 0ms / 0.5s
* 메모리 제한 : 2156KB / 256MB
* 정답 비율 : 37.268%
*/

#include <iostream>
#include <stack>

std::stack<int> st;

void push() {
	int t;

	std::cin >> t;

	st.push(t);

	return;
}

int pop(){
	if (st.empty())
	{
		return -1;
	}
	else
	{
		int top = st.top();
		st.pop();
		return top;
	}
}

int size() {
	return st.size();
}

int empty() {
	if (st.empty())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int top() {
	if (st.empty())
	{
		return -1;
	}
	else
	{
		int top = st.top();
		return top;
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
		else if (str == "top")
		{
			std::cout << top() << '\n';
		}
	}
}
