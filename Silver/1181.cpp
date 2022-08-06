//BaekJoon_1181.cpp
//단어 정렬

//방법 1

/*
* 제한 시간 : 1256ms / 2s
* 메모리 제한 : 4648KB / 256MB
* 정답 비율 : 40.222%
*/

#include <iostream>
#include <vector>
#include <algorithm>

bool compareFunc(std::string a, std::string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::vector<std::string> world;

	std::cin >> n;


	for (int i = 0; i < n; i++)
	{
		std::string str;
		std::cin >> str;

		if (find(world.begin(), world.end(), str) == world.end())
		{
			world.push_back(str);
		}
	}
	sort(world.begin(), world.end(), compareFunc);

	for (int i = 0; i < world.size(); i++)
	{
		std::cout << world[i] << '\n';
	}
	return 0;
}



//방법 2

/*
* 제한 시간 : 40ms / 2s
* 메모리 제한 : 3976KB / 256MB
* 정답 비율 : 40.222%
*/

#include <iostream>
#include <algorithm>

bool compareFunc(std::string a, std::string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}


int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::string* world;
	
	std::cin >> n;

	world = new std::string[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> world[i];
	}

	sort(world, world + n, compareFunc);

	std::string reduplication;

	for (int i = 0; i < n; i++)
	{
		if (world[i] != reduplication)
		{
			std::cout << world[i] << '\n';
			reduplication = world[i];
		}
	}
	return 0;
}
