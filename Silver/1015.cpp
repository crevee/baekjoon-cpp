//BaekJoon_1015
//수열 정렬

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 51.469%
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;

	std::cin >> n;

	std::vector <std::pair<int, int>> v;

	for (int i = 0; i < n; i++)
	{
		int v_val;

		std::cin >> v_val;
		v.push_back(std::make_pair(v_val, i));
	}

	std::sort(v.begin(), v.end());

	std::vector<int> result(n);

	for (int i = 0; i < n; i++)
	{
		result[v[i].second] = i;

	}

	for (int i = 0; i < n; i++)
	{
		std::cout << result[i] << ' ';
	}

	return 0;
}
