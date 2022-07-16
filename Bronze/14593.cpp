//BaekJoon_14593.cpp
//2017 아주대학교 프로그래밍 경시대회 (Large)

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 512MB
* 정답 비율 : 73.035%
*/

#include <iostream>
#include <vector>
#include <algorithm>

struct score {
	int s, c, l, index;
};

bool compare(score a, score b) {
	if (a.s == b.s && a.c == b.c)
		return a.l < b.l;
	if (a.s == b.s)
		return a.c < b.c;
	return a.s > b.s;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n = 0;
	
	std::cin >> n;

	std::vector<score> v(n);

	for (int i = 0; i < n; i++)
	{
		std::cin >> v[i].s >> v[i].c >> v[i].l;
		v[i].index = i + 1;
	}

	std::sort(v.begin(), v.end(), compare);

	std::cout << v[0].index;

	return 0;
}
