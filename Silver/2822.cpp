//BaekJoon_2822
//점수 계산


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 75.516%
*/

#include<iostream>
#include<algorithm>

bool compare(std::pair<int, int> a, std::pair<int, int> b) {
	return a.second < b.second;
}

int main() {

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	std::pair<int, int>score[8];
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		std::cin >> score[i].first;
		score[i].second = i + 1;
		
	}

	std::sort(score, score+ 8);

	for (int i = 3; i < 8; i++) {
		sum += score[i].first;
	}
	std::cout << sum << '\n';

	std::sort(score + 3, score + 8, compare);

	for (int i = 3; i < 8; i++) {
		std::cout << score[i].second << " ";
	}
}
