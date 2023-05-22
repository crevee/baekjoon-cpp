//BaekJoon_5800
//성적 통계


/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 53.990%
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int k, n;
	int score[100];

	cin >> k;

	for (int i = 0; i < k; i++){
		cin >> n;

		int largest_gap = 0;
		for (int j = 0; j < n; j++) {
			cin >> score[j];
		}
		sort(score, score + n);

		for (int j = 0; j < n - 1; j++) {
			if (largest_gap < score[j + 1] - score[j]) {
				largest_gap = score[j + 1] - score[j];
			}
		}
		std::cout << "Class " << i + 1 << "\n"
			<< "Max " << score[n - 1] 
			<< ", Min " << score[0] 
			<< ", Largest gap " << largest_gap << "\n";
	}
}
