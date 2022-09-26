//BaekJoon_4949
//균형잡힌 세상

/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 32.356%
*/

#include <iostream>
#include <stack>
#include <string>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	while (1)
	{
		std::string str;
		std::getline(std::cin, str);

		std::stack<char> s;

		bool answer = true;

		if (str.length() == 1 && str[0] == '.')
		{
			break;
		}
		
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
			{
				s.push(str[i]);
			}
			if (str[i] == ')')
			{
				if (s.empty() || s.top() == '[')
				{
					answer = false;
				}
				else
				{
					s.pop();
				}
			}
			if (str[i] == ']')
			{
				if (s.empty() || s.top() == '(')
				{
					answer = false;
				}
				else
				{
					s.pop();
				}
			}
		}

		if (s.empty() && answer == true)
		{
			std::cout << "yes" << '\n';
		}
		else
		{
			std::cout << "no" << '\n';
		}
	}
	return 0;
}
