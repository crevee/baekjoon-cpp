//BaekJoon_1302
//베스트셀러


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2028KB / 128MB
* 정답 비율 : 50.529%
*/

#include <iostream>
#include <map>
#include <algorithm>


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, maxCount = 0;
	std::string title("");


	std::map<std::string, int>book;
	std::map<std::string, int>::iterator iter;


	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> title;
		book[title]++;
		maxCount = std::max(maxCount, book[title]);
	}

	for (iter = book.begin(); iter != book.end(); ++iter)
	{
		if (iter -> second == maxCount)
		{
			std::cout << iter -> first;

			return 0;
		}
	}
}
