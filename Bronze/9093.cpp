//BaekJoon_9093
//단어 뒤집기

/*
* 제한 시간 : 40ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 52.505%
*/

#include <iostream>
#include <string>
#include <stack>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int t;
	std::string sentence;
	std::stack <char> st;

	std::cin >> t;
	std::cin.ignore();

	while (t--)
	{
		std::getline(std::cin, sentence);
		sentence += ' ';

		for (int i = 0; i < sentence.size(); i++) {
			if (sentence[i] == ' ')
			{
				while (!st.empty()) {
					std::cout << st.top();
					st.pop();
				}
				std::cout << ' ';
			}
			else {
				st.push(sentence[i]);
			}
		}std::cout << '\n';
	}
}
