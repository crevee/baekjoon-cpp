//BaekJoon_1931
//회의실 배정

/*
* 제한 시간 : 28ms / 2s
* 메모리 제한 : 3688KB / 128MB
* 정답 비율 : 29.580%
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, start, end;
	std::vector<std::pair<int, int>> schedule;



	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> start >> end;
		schedule.push_back(std::make_pair(end, start));
	}
	
	std::sort(schedule.begin(), schedule.end());

	int time = schedule[0].first;
	int count = 1;

	for (int i = 1; i < n; i++) {
		if (time <= schedule[i].second) {
			count++;
			time = schedule[i].first;
		}
	}

	std::cout << count;

	return 0;
}

/*
* 제한 시간 : 24ms / 2s
* 메모리 제한 : 2808KB / 128MB
* 정답 비율 : 29.580%
*/

/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, int>> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i].second;
		cin >> a[i].first;
	}

	sort(a.begin(), a.end());

	int count = 0;
	int end = -1;

	for (int i = 0; i < n; i++) {
		if (a[i].second >= end) {
			end = a[i].first;
			count++;
		}
	}
	cout << count << "\n";
}
*/
